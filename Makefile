.DEFAULT_GOAL := help

ifeq ($(origin CXX),default)
CXX := clang++
endif
CXXFLAGS ?= -std=c++23 -g -O0
CHALLENGE_PATH := $(patsubst challenges/%,%,$(CHALLENGE))

SRC := challenges/$(CHALLENGE_PATH)/main.cpp
BIN := build/challenges/$(CHALLENGE_PATH)/main

.PHONY: help build run clean list

help:
	@printf 'Usage:\n'
	@printf '  make run CHALLENGE=duplicate-integer\n'
	@printf '  make build CHALLENGE=duplicate-integer\n'
	@printf '  make duplicate-integer\n'
	@printf '  make list\n'

build:
	@if test -z '$(CHALLENGE)'; then \
		printf 'Set CHALLENGE, for example: make run CHALLENGE=duplicate-integer\n'; \
	else \
		test -f '$(SRC)' || { printf 'Missing C++ challenge: %s\n' '$(SRC)' >&2; exit 1; }; \
		$(MAKE) --no-print-directory '$(BIN)'; \
	fi

$(BIN): $(SRC) helper/cpp_runner.hpp Makefile
	@mkdir -p '$(dir $(BIN))'
	$(CXX) $(CXXFLAGS) '$(SRC)' -o '$(BIN)'

run: build
	@if test -n '$(CHALLENGE)'; then '$(BIN)'; fi

clean:
	@if test -z '$(CHALLENGE)'; then \
		printf 'Set CHALLENGE, for example: make clean CHALLENGE=duplicate-integer\n'; \
	else \
		rm -f '$(BIN)'; \
	fi

list:
	@for file in challenges/*/main.cpp; do basename "$$(dirname "$$file")"; done

%:
	@$(MAKE) --no-print-directory run CHALLENGE=$@
