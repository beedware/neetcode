from typing import List

class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        pass

EXAMPLES = [
    "nums=[1,2,3]",
    "nums=[7]"
]
EXPECTED = [
    "[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]",
    "[[7]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
