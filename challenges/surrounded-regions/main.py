from typing import List

class Solution:
    def solve(self, board: List[List[str]]) -> None:
        pass

EXAMPLES = [
    "board=[[\"X\",\"X\",\"X\",\"X\"],[\"X\",\"O\",\"O\",\"X\"],[\"X\",\"X\",\"O\",\"X\"],[\"X\",\"O\",\"X\",\"X\"]]",
    "board=[[\"X\"]]"
]
EXPECTED = [
    "[",
    "[[\"X\"]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
