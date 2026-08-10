from typing import List

class Solution:
    def findMin(self, nums: List[int]) -> int:
        pass

EXAMPLES = [
    "nums=[3,4,5,6,1,2]",
    "nums=[4,5,0,1,2,3]"
]
EXPECTED = [
    "1",
    "0",
    "4"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
