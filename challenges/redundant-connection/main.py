from typing import List

class Solution:
    def findRedundantConnection(self, edges: List[List[int]]) -> List[int]:
        pass

EXAMPLES = [
    "edges=[[1,2],[1,3],[3,4],[2,4]]",
    "edges=[[1,2],[1,3],[1,4],[3,4],[4,5]]"
]
EXPECTED = [
    "[2,4]",
    "[3,4]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
