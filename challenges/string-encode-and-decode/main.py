from typing import List

class Solution:

    def encode(self, strs: List[str]) -> str:
        pass

    def decode(self, s: str) -> List[str]:
        pass

EXAMPLES = [
    "strs=[\"Hello\",\"World\"]",
    "strs=[\"\"]"
]
EXPECTED = [
    "[\"Hello\",\"World\"]",
    "[\"\"]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
