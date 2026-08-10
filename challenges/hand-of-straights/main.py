from typing import List

class Solution:
    def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
        pass

EXAMPLES = [
    "hand=[1,2,4,2,3,5,3,4]\ngroupSize=4",
    "hand=[1,2,3,3,4,5,6,7]\ngroupSize=4"
]
EXPECTED = [
    "true",
    "false"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
