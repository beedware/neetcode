class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        pass

EXAMPLES = [
    "s=\"racecar\"\nt=\"carrace\"",
    "s=\"jar\"\nt=\"jam\""
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
