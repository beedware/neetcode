class MinStack:

    def __init__(self):
        pass


    def push(self, val: int) -> None:
        pass


    def pop(self) -> None:
        pass


    def top(self) -> int:
        pass


    def getMin(self) -> int:
        pass

EXAMPLES = [
    "[\"MinStack\", \"push\", 1, \"push\", 2, \"push\", 0, \"getMin\", \"pop\", \"top\", \"getMin\"]"
]
EXPECTED = [
    "[null,null,null,null,0,null,2,1]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
