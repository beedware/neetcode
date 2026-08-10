class Solution:
    def reverse(self, x: int) -> int:
        pass

EXAMPLES = [
    "x=1234",
    "x=-1234",
    "x=1234236467"
]
EXPECTED = [
    "4321",
    "-4321",
    "0"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
