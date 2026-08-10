class Solution:
    def reverseBits(self, n: int) -> int:
        pass

EXAMPLES = [
    "n=00000000000000000000000000010101"
]
EXPECTED = [
    "2818572288 (10101000000000000000000000000000)"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
