from typing import List

class Solution:
    def canJump(self, nums: List[int]) -> bool:
        pass

EXAMPLES = [
    "nums=[1,2,0,1,0]",
    "nums=[1,2,1,0,1]"
]
EXPECTED = [
    "true",
    "false"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
