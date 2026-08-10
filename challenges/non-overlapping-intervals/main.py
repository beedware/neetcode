from typing import List

class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        pass

EXAMPLES = [
    "intervals=[[1,2],[2,4],[1,4]]",
    "intervals=[[1,2],[2,4]]"
]
EXPECTED = [
    "1",
    "0"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
