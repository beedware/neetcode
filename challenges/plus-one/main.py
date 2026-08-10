from typing import List

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        pass

EXAMPLES = [
    "digits=[1,2,3,4]",
    "digits=[9,9,9]"
]
EXPECTED = [
    "[1,2,3,5]",
    "[1,0,0,0]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
