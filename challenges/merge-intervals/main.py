from typing import List

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        pass

EXAMPLES = [
    "intervals=[[1,3],[1,5],[6,7]]",
    "intervals=[[1,2],[2,3]]"
]
EXPECTED = [
    "[[1,5],[6,7]]",
    "[[1,3]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
