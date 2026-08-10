from typing import List

class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        pass

EXAMPLES = [
    "heights=[7,1,7,2,2,4]",
    "heights=[1,3,7]"
]
EXPECTED = [
    "8",
    "7"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
