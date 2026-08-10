from typing import List

class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        pass

EXAMPLES = [
    "beginWord=\"cat\"\nendWord=\"sag\"\nwordList=[\"bat\",\"bag\",\"sag\",\"dag\",\"dot\"]",
    "beginWord=\"cat\"\nendWord=\"sag\"\nwordList=[\"bat\",\"bag\",\"sat\",\"dag\",\"dot\"]"
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
