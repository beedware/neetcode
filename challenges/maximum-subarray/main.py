from typing import List

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        pass

EXAMPLES = [
    "nums=[2,-3,4,-2,2,1,-1,4]",
    "nums=[-1]"
]
EXPECTED = [
    "8",
    "-1"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
