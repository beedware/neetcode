from typing import List

class Solution:
    def foreignDictionary(self, words: List[str]) -> str:
        pass

EXAMPLES = [
    "words=[\"z\",\"o\"]",
    "words=[\"hrn\",\"hrf\",\"er\",\"enn\",\"rfnn\"]",
    "words=[\"abc\",\"ab\"]"
]
EXPECTED = [
    "\"zo\"",
    "\"hernf\"",
    "\"\""
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
