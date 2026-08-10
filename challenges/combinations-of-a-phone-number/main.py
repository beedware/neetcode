from typing import List

class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        pass

EXAMPLES = [
    "digits=\"34\"",
    "digits=\"\""
]
EXPECTED = [
    "[\"dg\",\"dh\",\"di\",\"eg\",\"eh\",\"ei\",\"fg\",\"fh\",\"fi\"]",
    "[]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
