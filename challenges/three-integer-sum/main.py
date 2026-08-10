from typing import List

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        pass

EXAMPLES = [
    "nums=[-1,0,1,2,-1,-4]",
    "nums=[0,1,1]"
]
EXPECTED = [
    "[[-1,-1,2],[-1,0,1]]",
    "[]",
    "[[0,0,0]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
