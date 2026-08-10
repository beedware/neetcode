class Solution:
    def minWindow(self, s: str, t: str) -> str:
        pass

EXAMPLES = [
    "s=\"OUZODYXAZV\"\nt=\"XYZ\"",
    "s=\"xyz\"\nt=\"xyz\"",
    "s=\"x\"\nt=\"xy\""
]
EXPECTED = [
    "\"YXAZ\"",
    "\"xyz\"",
    "\"\""
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
