from typing import List

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        pass

EXAMPLES = [
    "nums=[3,2,3]",
    "nums=[7,6,6,7,8]"
]
EXPECTED = [
    "2",
    "8"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
