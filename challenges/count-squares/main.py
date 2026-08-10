from typing import List

class CountSquares:

    def __init__(self):
        pass


    def add(self, point: List[int]) -> None:
        pass


    def count(self, point: List[int]) -> int:
        pass

EXAMPLES = [
    "[\"CountSquares\", \"add\", [[1, 1]], \"add\", [[2, 2]], \"add\", [[1, 2]], \"count\", [[2, 1]], \"count\", [[3, 3]], \"add\", [[2, 2]], \"count\", [[2, 1]]]"
]
EXPECTED = [
    "[null, null, null, null, 1, 0, null, 2]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
