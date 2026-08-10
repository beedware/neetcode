class Solution:
    def hammingWeight(self, n: int) -> int:
        pass

EXAMPLES = [
    "n=00000000000000000000000000001011",
    "n=01111111111111111111111111111101"
]
EXPECTED = [
    "4",
    "30"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
