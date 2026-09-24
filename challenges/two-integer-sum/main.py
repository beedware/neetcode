from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indexes: dict[int, int] = {}

        for index, num in enumerate(nums):
            complement: int = target - num

            if complement in indexes:
                return [indexes[complement], index]

            indexes[num] = index

        return []

EXAMPLES = [
    "nums=[3,4,5,6]\ntarget=7",
    "nums=[4,5,6]\ntarget=10"
]
EXPECTED = [
    "[0,1]",
    "[0,2]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
