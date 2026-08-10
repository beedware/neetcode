from typing import List

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        pass

EXAMPLES = [
    "nums=[1,2,3,2,2]",
    "nums=[1,2,3,4,4]"
]
EXPECTED = [
    "2",
    "4"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
