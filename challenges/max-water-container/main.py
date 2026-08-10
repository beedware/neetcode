from typing import List

class Solution:
    def maxArea(self, heights: List[int]) -> int:
        pass

EXAMPLES = [
    "height=[1,7,2,5,4,7,3,6]",
    "height=[2,2,2]"
]
EXPECTED = [
    "36",
    "4"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
