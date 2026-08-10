class LRUCache:

    def __init__(self, capacity: int):
        pass


    def get(self, key: int) -> int:
        pass


    def put(self, key: int, value: int) -> None:
        pass

EXAMPLES = [
    "[\"LRUCache\", [2], \"put\", [1, 10],  \"get\", [1], \"put\", [2, 20], \"put\", [3, 30], \"get\", [2], \"get\", [1]]"
]
EXPECTED = [
    "[null, null, 10, null, null, 20, -1]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
