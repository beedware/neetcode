from typing import List

class Solution:
    def partition(self, s: str) -> List[List[str]]:
        pass

EXAMPLES = [
    "s=\"aab\"",
    "s=\"a\""
]
EXPECTED = [
    "[[\"a\",\"a\",\"b\"],[\"aa\",\"b\"]]",
    "[[\"a\"]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
