class PrefixTree:

    def __init__(self):
        pass


    def insert(self, word: str) -> None:
        pass


    def search(self, word: str) -> bool:
        pass


    def startsWith(self, prefix: str) -> bool:
        pass

EXAMPLES = [
    "[\"PrefixTree\", \"insert\", \"apple\", \"search\", \"apple\", \"search\", \"app\", \"startsWith\", \"app\", \"insert\", \"app\", \"search\", \"app\"]"
]
EXPECTED = [
    "[null, null, true, false, true, null, true]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
