class MedianFinder:

    def __init__(self):
        pass


    def addNum(self, num: int) -> None:
        pass


    def findMedian(self) -> float:
        pass

EXAMPLES = [
    "[\"MedianFinder\", \"addNum\", \"1\", \"findMedian\", \"addNum\", \"2\", \"findMedian\", \"addNum\", \"3\", \"findMedian\"]"
]
EXPECTED = [
    "[null, null, 1.0, null, 2.0, null, 2.0]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
