from typing import List

class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
        pass

EXAMPLES = [
    "nums=[2,5,6,9]\ntarget=9",
    "nums=[3,4,5]\ntarget=16",
    "nums=[3]\ntarget=5"
]
EXPECTED = [
    "[[2,2,5],[9]]",
    "[[3,3,3,3,4],[3,3,5,5],[4,4,4,4],[3,4,4,5]]",
    "[]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
