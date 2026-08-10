class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        pass

EXAMPLES = [
    "s1=\"ab\"\ns2=\"lecabee\"",
    "s1=\"abc\"\ns2=\"lecaabee\""
]
EXPECTED = [
    "true",
    "false"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
