class TimeMap:

    def __init__(self):
        pass


    def set(self, key: str, value: str, timestamp: int) -> None:
        pass


    def get(self, key: str, timestamp: int) -> str:
        pass

EXAMPLES = [
    "[\"TimeMap\", \"set\", [\"alice\", \"happy\", 1], \"get\", [\"alice\", 1], \"get\", [\"alice\", 2], \"set\", [\"alice\", \"sad\", 3], \"get\", [\"alice\", 3]]"
]
EXPECTED = [
    "[null, null, \"happy\", \"happy\", null, \"sad\"]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
