from typing import List

class Solution:
    def swimInWater(self, grid: List[List[int]]) -> int:
        pass

EXAMPLES = [
    "grid=[[0,1],[2,3]]",
    "grid=[[0,1,2,10],[9,14,4,13],[12,3,8,15],[11,5,7,6]]]"
]
EXPECTED = [
    "3",
    "8"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
