from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        pass

EXAMPLES = [
    "nums=[3,4,5,6,1,2]\ntarget=1",
    "nums=[3,5,6,0,1,2]\ntarget=4"
]
EXPECTED = [
    "4",
    "-1"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
