# neetcode-submissions

My code submissions for https://neetcode.io/.

## Structure

NeetCode coding problems live in `challenges/<slug>/` and have both Python and C++ stubs:

```text
challenges/
  duplicate-integer/
    main.py
    main.cpp
```

Shared test-runner helpers live at the repo root:

```text
helper/
  python_runner.py
  cpp_runner.hpp
```

The challenge files are intentionally kept close to the NeetCode editor stubs, so most implementation work should stay inside the `Solution` class or the design class for that challenge.

Other top-level categories can be added later, such as `ml/`, `sql/`, `skills/`, or `patterns/`.

## Run Python

Run a challenge directly from the repo root:

```bash
python challenges/duplicate-integer/main.py
```

The runner prints the example inputs from the problem description, the expected output, and your actual output.

## Run C++

Compile and run a challenge directly from the repo root:

```bash
clang++ -std=c++23 challenges/duplicate-integer/main.cpp -o /tmp/duplicate-integer
/tmp/duplicate-integer
```

The C++ runner uses the same examples and output format as the Python runner.

## Branches

`main` and `develop` are the main branches.

Use `develop` for the normal implementation work on challenges.

Use temporary branches when you want disposable practice or speedrun attempts. A good pattern is:

```text
scratch/<slug>
```

For example:

```text
scratch/duplicate-integer
```

These `scratch/*` branches are intended to be deleted whenever you want to reset and try again.

## Pull Requests

Open PRs into `develop`, not `main`.

PR branches should use this format:

```text
challenges/<slug>
```

PR titles should use this format:

```text
LANG: PATH
```

For example:

```text
py: challenges/duplicate-integer
```

Squash PRs into `develop` as one commit, and use the same `LANG: PATH` format for the squash commit message.

Put the problem notes in the PR description.

## Notes

The initial stubs return placeholder values or `pass`, so examples will not pass until the solution is implemented.
