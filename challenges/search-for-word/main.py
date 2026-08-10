from typing import List

class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        pass

EXAMPLES = [
    "board=[[\"A\",\"B\",\"C\",\"D\"],[\"S\",\"A\",\"A\",\"T\"],[\"A\",\"C\",\"A\",\"E\"]]\nword=\"CAT\"",
    "board=[[\"A\",\"B\",\"C\",\"D\"],[\"S\",\"A\",\"A\",\"T\"],[\"A\",\"C\",\"A\",\"E\"]]\nword=\"BAT\""
]
EXPECTED = [
    "true",
    "false"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
