class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        pass

EXAMPLES = [
    "s=\"abcabcbb\"",
    "s=\"bbbbb\"",
    "s=\"pwwkew\""
]
EXPECTED = [
    "3",
    "1"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
