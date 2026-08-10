from typing import List

class Solution:
    def longestIncreasingPath(self, matrix: List[List[int]]) -> int:
        pass

EXAMPLES = [
    "matrix=[[5,5,3],[2,3,6],[1,1,1]]",
    "matrix=[[1,2,3],[2,1,4],[7,6,5]]"
]
EXPECTED = [
    "4",
    "7"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
