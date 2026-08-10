from typing import List

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        pass

EXAMPLES = [
    "matrix=[[1,3,5,7],[10,11,16,20],[23,30,34,60]]\ntarget=3",
    "matrix=[[1,3,5,7],[10,11,16,20],[23,30,34,60]]\ntarget=13"
]
EXPECTED = [
    "true",
    "false"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
