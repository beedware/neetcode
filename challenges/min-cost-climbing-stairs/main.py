from typing import List

class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        pass

EXAMPLES = [
    "cost=[1,2,3]",
    "cost=[1,2,1,2,1,1,1]"
]
EXPECTED = [
    "2",
    "4"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
