from typing import List

class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        pass

EXAMPLES = [
    "nums=[1,2,1]",
    "nums=[7,7]"
]
EXPECTED = [
    "[[],[1],[1,2],[1,1],[1,2,1],[2]]",
    "[[],[7], [7,7]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
