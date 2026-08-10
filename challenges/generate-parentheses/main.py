from typing import List

class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        pass

EXAMPLES = [
    "n=1",
    "n=3"
]
EXPECTED = [
    "[\"()\"]",
    "[\"((()))\",\"(()())\",\"(())()\",\"()(())\",\"()()()\"]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
