class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        pass

EXAMPLES = [
    "text1=\"crabt\"\ntext2=\"cat\"",
    "text1=\"abcd\"\ntext2=\"abcd\"",
    "text1=\"abcd\"\ntext2=\"efgh\""
]
EXPECTED = [
    "3",
    "4",
    "0"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
