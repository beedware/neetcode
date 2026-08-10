from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        pass

EXAMPLES = [
    "strs=[\"act\",\"pots\",\"tops\",\"cat\",\"stop\",\"hat\"]",
    "strs=[\"x\"]"
]
EXPECTED = [
    "[[\"hat\"],[\"act\", \"cat\"],[\"stop\", \"pots\", \"tops\"]]",
    "[[\"x\"]]",
    "[[\"\"]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
