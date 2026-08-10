class Solution:
    def getSum(self, a: int, b: int) -> int:
        pass

EXAMPLES = [
    "a=1\nb=1",
    "a=4\nb=7"
]
EXPECTED = [
    "2",
    "11"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
