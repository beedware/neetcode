from typing import List

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        pass

EXAMPLES = [
    "nums=[2,20,4,10,3,4,5]",
    "nums=[0,3,2,5,4,6,1,1]"
]
EXPECTED = [
    "4",
    "7"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
