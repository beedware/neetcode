class Solution:
    def numDecodings(self, s: str) -> int:
        pass

EXAMPLES = [
    "s=\"12\"",
    "s=\"226\"",
    "s=\"06\""
]
EXPECTED = [
    "2",
    "0"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
