from typing import List

class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        pass

EXAMPLES = [
    "grid=[[\"0\",\"1\",\"1\",\"1\",\"0\"],[\"0\",\"1\",\"0\",\"1\",\"0\"],[\"1\",\"1\",\"0\",\"0\",\"0\"],[\"0\",\"0\",\"0\",\"0\",\"0\"]]",
    "grid=[[\"1\",\"1\",\"0\",\"0\",\"1\"],[\"1\",\"1\",\"0\",\"0\",\"1\"],[\"0\",\"0\",\"1\",\"0\",\"0\"],[\"0\",\"0\",\"0\",\"1\",\"1\"]]"
]
EXPECTED = [
    "1",
    "4"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
