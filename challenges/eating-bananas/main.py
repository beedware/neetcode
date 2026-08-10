from typing import List

class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        pass

EXAMPLES = [
    "piles=[1,4,3,2]\nh=9",
    "piles=[25,10,23,4]\nh=4"
]
EXPECTED = [
    "2",
    "25"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
