.DEFAULT_GOAL := help

ifeq ($(origin CXX),default)
CXX := clang++
endif
CXXFLAGS ?= -std=c++23
CHALLENGE ?= duplicate-integer

SRC := challenges/$(CHALLENGE)/main.cpp
BIN := build/challenges/$(CHALLENGE)/main

.PHONY: help build run clean list

help:
	@printf 'Usage:\n'
	@printf '  make run CHALLENGE=duplicate-integer\n'
	@printf '  make build CHALLENGE=duplicate-integer\n'
	@printf '  make duplicate-integer\n'
	@printf '  make list\n'

build:
	@test -f '$(SRC)' || { printf 'Missing C++ challenge: %s\n' '$(SRC)' >&2; exit 1; }
	@mkdir -p '$(dir $(BIN))'
	$(CXX) $(CXXFLAGS) '$(SRC)' -o '$(BIN)'

run: build
	'$(BIN)'

clean:
	@rm -f '$(BIN)'

list:
	@for file in challenges/*/main.cpp; do basename "$$(dirname "$$file")"; done

%:
	@$(MAKE) --no-print-directory run CHALLENGE=$@
