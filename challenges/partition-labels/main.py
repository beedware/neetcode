from typing import List

class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        pass

EXAMPLES = [
    "s=\"xyxxyzbzbbisl\"",
    "s=\"abcabc\""
]
EXPECTED = [
    "[5, 5, 1, 1, 1]",
    "[6]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
