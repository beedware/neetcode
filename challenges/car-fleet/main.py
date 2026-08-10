from typing import List

class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        pass

EXAMPLES = [
    "target=10\nposition=[1,4]\nspeed=[3,2]",
    "target=10\nposition=[4,1,0,7]\nspeed=[2,2,1,1]"
]
EXPECTED = [
    "1",
    "3"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
