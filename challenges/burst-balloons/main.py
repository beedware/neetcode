from typing import List

class Solution:
    def maxCoins(self, nums: List[int]) -> int:
        pass

EXAMPLES = [
    "nums=[4,2,3,7]"
]
EXPECTED = [
    "143"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
