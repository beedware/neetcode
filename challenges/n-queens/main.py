from typing import List

class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        pass

EXAMPLES = [
    "n=4",
    "n=1"
]
EXPECTED = [
    "[[\".Q..\",\"...Q\",\"Q...\",\"..Q.\"],[\"..Q.\",\"Q...\",\"...Q\",\".Q..\"]]",
    "[[\"Q\"]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
