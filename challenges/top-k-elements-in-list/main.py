from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        pass

EXAMPLES = [
    "nums=[1,2,2,3,3,3]\nk=2",
    "nums=[7,7]\nk=1"
]
EXPECTED = [
    "[2,3]",
    "[7]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
