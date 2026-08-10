from typing import List

class Solution:
    def minInterval(self, intervals: List[List[int]], queries: List[int]) -> List[int]:
        pass

EXAMPLES = [
    "intervals=[[1,3],[2,3],[3,7],[6,6]]\nqueries=[2,3,1,7,6,8]"
]
EXPECTED = [
    "[2,2,3,5,1,-1]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
