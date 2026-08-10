from typing import List

class Solution:
    def jump(self, nums: List[int]) -> int:
        pass

EXAMPLES = [
    "nums=[2,4,1,1,1,1]",
    "nums=[2,1,2,1,0]"
]
EXPECTED = [
    "2",
    "2"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
