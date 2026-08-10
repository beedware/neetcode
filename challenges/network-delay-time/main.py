from typing import List

class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        pass

EXAMPLES = [
    "times=[[1,2,1],[2,3,1],[1,4,4],[3,4,1]]\nn=4\nk=1",
    "times=[[1,2,1],[2,3,1]]\nn=3\nk=2"
]
EXPECTED = [
    "3",
    "-1"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
