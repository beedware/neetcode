class Solution:
    def climbStairs(self, n: int) -> int:
        pass

EXAMPLES = [
    "n=2",
    "n=3"
]
EXPECTED = [
    "2",
    "3"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
