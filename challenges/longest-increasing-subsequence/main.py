from typing import List

class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        pass

EXAMPLES = [
    "nums=[9,1,4,2,3,3,7]",
    "nums=[0,3,1,3,2,3]"
]
EXPECTED = [
    "4",
    "4"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
