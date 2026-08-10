from typing import List

class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        pass

EXAMPLES = [
    "stones=[2,3,6,2,4]",
    "stones=[1,2]"
]
EXPECTED = [
    "1",
    "1"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
