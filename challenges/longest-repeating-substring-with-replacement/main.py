class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        pass

EXAMPLES = [
    "s=\"XYYX\"\nk=2",
    "s=\"AAABABB\"\nk=1"
]
EXPECTED = [
    "4",
    "5"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
