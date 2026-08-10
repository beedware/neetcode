from typing import List

class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        pass

EXAMPLES = [
    "amount=4\ncoins=[1,2,3]",
    "amount=7\ncoins=[2,4]"
]
EXPECTED = [
    "4",
    "0"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
