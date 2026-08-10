from typing import List

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pass

EXAMPLES = [
    "nums=[1,2,4,6]",
    "nums=[-1,0,1,2,3]"
]
EXPECTED = [
    "[48,24,12,8]",
    "[0,-6,0,0,0]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
