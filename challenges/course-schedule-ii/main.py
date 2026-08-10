from typing import List

class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        pass

EXAMPLES = [
    "numCourses=3\nprerequisites=[[1,0]]",
    "numCourses=3\nprerequisites=[[0,1],[1,2],[2,0]]"
]
EXPECTED = [
    "[0,1,2]",
    "[]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
