class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        pass

EXAMPLES = [
    "num1=\"3\"\nnum2=\"4\"",
    "num1=\"111\"\nnum2=\"222\""
]
EXPECTED = [
    "\"12\"",
    "\"24642\""
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
