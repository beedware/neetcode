from typing import List

class Solution:
    def rob(self, nums: List[int]) -> int:
        pass

EXAMPLES = [
    "nums=[3,4,3]",
    "nums=[2,9,8,3,6]"
]
EXPECTED = [
    "4",
    "15"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
