from typing import List

class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        pass

EXAMPLES = [
    "intervals=[[1,3],[4,6]]\nnewInterval=[2,5]",
    "intervals=[[1,2],[3,5],[9,10]]\nnewInterval=[6,7]"
]
EXPECTED = [
    "[[1,6]]",
    "[[1,2],[3,5],[6,7],[9,10]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
