from typing import List

class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        pass

EXAMPLES = [
    "gas=[1,2,3,4]\ncost=[2,2,4,1]",
    "gas=[1,2,3]\ncost=[2,3,2]"
]
EXPECTED = [
    "3",
    "-1"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
