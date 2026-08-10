from typing import List

class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        pass

EXAMPLES = [
    "nums=[2,3,1,5,4]\nk=2",
    "nums=[2,3,1,1,5,5,4]\nk=3"
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
