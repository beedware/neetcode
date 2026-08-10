from typing import List

class Solution:
    def minCostConnectPoints(self, points: List[List[int]]) -> int:
        pass

EXAMPLES = [
    "points=[[0,0],[2,2],[3,3],[2,4],[4,2]]"
]
EXPECTED = [
    "10"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
