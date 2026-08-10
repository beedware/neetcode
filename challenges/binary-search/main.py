from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        pass

EXAMPLES = [
    "nums=[-1,0,2,4,6,8]\ntarget=4",
    "nums=[-1,0,2,4,6,8]\ntarget=3"
]
EXPECTED = [
    "3",
    "-1"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
