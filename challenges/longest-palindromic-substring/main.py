class Solution:
    def longestPalindrome(self, s: str) -> str:
        pass

EXAMPLES = [
    "s=\"ababd\"",
    "s=\"abbc\""
]
EXPECTED = [
    "\"bab\"",
    "\"bb\""
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
