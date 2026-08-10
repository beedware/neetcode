class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        pass

EXAMPLES = [
    "s=\"aa\"\np=\".b\"",
    "s=\"nnn\"\np=\"n*\"",
    "s=\"xyz\"\np=\".*z\""
]
EXPECTED = [
    "false",
    "true",
    "true"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
