from typing import List

class Solution:
    def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
        pass

EXAMPLES = [
    "heights=[[4,2,7,3,4],[7,4,6,4,7],[6,3,5,3,6]]",
    "heights=[[1],[1]]"
]
EXPECTED = [
    "[[0,2],[0,4],[1,0],[1,1],[1,2],[1,3],[1,4],[2,0]]",
    "[[0,0],[1,0]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
