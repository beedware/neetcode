from typing import List

class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        pass

EXAMPLES = [
    "coins=[1,2,5]\namount=11",
    "coins=[2]\namount=3",
    "coins=[1]\namount=0"
]
EXPECTED = [
    "3",
    "-1",
    "0"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
