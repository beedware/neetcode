from typing import List

class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        pass

EXAMPLES = [
    "tasks=[\"X\",\"X\",\"Y\",\"Y\"]\nn=2",
    "tasks=[\"A\",\"A\",\"A\",\"B\",\"C\"]\nn=3"
]
EXPECTED = [
    "5",
    "9"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
