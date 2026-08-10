class Solution:
    def myPow(self, x: float, n: int) -> float:
        pass

EXAMPLES = [
    "x=2.00000\nn=5",
    "x=1.10000\nn=10",
    "x=2.00000\nn=-3"
]
EXPECTED = [
    "32.00000",
    "2.59374",
    "0.12500"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
