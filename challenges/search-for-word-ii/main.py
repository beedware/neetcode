from typing import List

class Solution:
    def findWords(self, board: List[List[str]], words: List[str]) -> List[str]:
        pass

EXAMPLES = [
    "board=[[\"a\",\"b\",\"c\",\"d\"],[\"s\",\"a\",\"a\",\"t\"],[\"a\",\"c\",\"k\",\"e\"],[\"a\",\"c\",\"d\",\"n\"]]\nwords=[\"bat\",\"cat\",\"back\",\"backend\",\"stack\"]",
    "board=[[\"x\",\"o\"],[\"x\",\"o\"]]\nwords=[\"xoxo\"]"
]
EXPECTED = [
    "[\"cat\",\"back\",\"backend\"]",
    "[]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
