from typing import List

class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        pass

EXAMPLES = [
    "matrix=[[1,2],[3,4]]",
    "matrix=[[1,2,3],[4,5,6],[7,8,9]]",
    "matrix=[[1,2,3,4],[5,6,7,8],[9,10,11,12]]"
]
EXPECTED = [
    "[1,2,4,3]",
    "[1,2,3,6,9,8,7,4,5]",
    "[1,2,3,4,8,12,11,10,9,5,6,7]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
