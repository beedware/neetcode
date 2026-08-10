class WordDictionary:

    def __init__(self):
        pass


    def addWord(self, word: str) -> None:
        pass


    def search(self, word: str) -> bool:
        pass

EXAMPLES = [
    "[\"WordDictionary\",\"addWord\",\"addWord\",\"addWord\",\"search\",\"search\",\"search\",\"search\"]\n[[],[\"day\"],[\"bay\"],[\"may\"],[\"say\"],[\"day\"],[\".ay\"],[\"b..\"]]"
]
EXPECTED = [
    "[null, null, null, null, false, true, true, true]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
