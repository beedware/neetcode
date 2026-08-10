from typing import List

class Solution:
    def trap(self, height: List[int]) -> int:
        pass

EXAMPLES = [
    "height=[0,2,0,3,1,0,1,3,2,1]"
]
EXPECTED = [
    "9"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
