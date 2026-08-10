from typing import List

class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        pass

EXAMPLES = [
    "points=[[0,2],[2,2]]\nk=1",
    "points=[[0,2],[2,0],[2,2]]\nk=2"
]
EXPECTED = [
    "[[0,2]]",
    "[[0,2],[2,0]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
