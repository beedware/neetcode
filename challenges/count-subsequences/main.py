class Solution:
    def numDistinct(self, s: str, t: str) -> int:
        pass

EXAMPLES = [
    "s=\"caaat\"\nt=\"cat\"",
    "s=\"xxyxy\"\nt=\"xy\""
]
EXPECTED = [
    "3",
    "5"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
