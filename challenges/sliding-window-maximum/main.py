from typing import List

class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        pass

EXAMPLES = [
    "nums=[1,2,1,0,4,2,6]\nk=3"
]
EXPECTED = [
    "[2,2,4,4,6]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
