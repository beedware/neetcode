from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        pass

EXAMPLES = [
    "prices=[7,1,5,3,6,4]",
    "prices=[7,6,4,3,1]"
]
EXPECTED = [
    "6",
    "0"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
