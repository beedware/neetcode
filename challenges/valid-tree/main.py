from typing import List

class Solution:
    def validTree(self, n: int, edges: List[List[int]]) -> bool:
        pass

EXAMPLES = [
    "n=5\nedges=[[0,1],[0,2],[0,3],[1,4]]",
    "n=5\nedges=[[0,1],[1,2],[2,3],[1,3],[1,4]]"
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
