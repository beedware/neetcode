from typing import List

class Solution:
    def mergeTriplets(self, triplets: List[List[int]], target: List[int]) -> bool:
        pass

EXAMPLES = [
    "triplets=[[1,2,3],[7,1,1]]\ntarget=[7,2,3]",
    "triplets=[[2,5,6],[1,4,4],[5,7,5]]\ntarget=[5,4,6]"
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
