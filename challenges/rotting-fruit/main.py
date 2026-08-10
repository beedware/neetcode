from typing import List

class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        pass

EXAMPLES = [
    "grid=[[1,1,0],[0,1,1],[0,1,2]]",
    "grid=[[1,0,1],[0,2,0],[1,0,1]]"
]
EXPECTED = [
    "4",
    "-1"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
