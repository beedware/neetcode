from typing import List

class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        pass

EXAMPLES = [
    "tokens=[\"2\",\"1\",\"+\",\"3\",\"*\"]"
]
EXPECTED = [
    "5"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
