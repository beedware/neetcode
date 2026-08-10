from typing import List

class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        pass

EXAMPLES = [
    "numbers=[1,2,3,4]\ntarget=3"
]
EXPECTED = [
    "[1,2]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
