from typing import List

class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        pass

EXAMPLES = [
    "matrix=[[0,1],[1,0]]",
    "matrix=[[1,2,3],[4,0,5],[6,7,8]]"
]
EXPECTED = [
    "[",
    "["
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
