from typing import List

class Solution:
    def countBits(self, n: int) -> List[int]:
        pass

EXAMPLES = [
    "n=4"
]
EXPECTED = [
    "[0,1,1,2,1]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
