from typing import List

class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        pass

EXAMPLES = [
    "nums=[2,4,-3,5]",
    "nums=[-3,0,-2]"
]
EXPECTED = [
    "8",
    "0"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
