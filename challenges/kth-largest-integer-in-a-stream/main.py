from typing import List

class KthLargest:

    def __init__(self, k: int, nums: List[int]):
        pass


    def add(self, val: int) -> int:
        pass

EXAMPLES = [
    "[\"KthLargest\", [3, [1, 2, 3, 3]], \"add\", [3], \"add\", [5], \"add\", [6], \"add\", [7], \"add\", [8]]"
]
EXPECTED = [
    "[null, 3, 3, 3, 5, 6]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
