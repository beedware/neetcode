from typing import List

class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        pass

EXAMPLES = [
    "temperatures=[30,38,30,36,35,40,28]",
    "temperatures=[22,21,20]"
]
EXPECTED = [
    "[1,4,1,2,1,0,0]",
    "[0,0,0]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
