from typing import List

class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        pass

EXAMPLES = [
    "n=4\nflights=[[0,1,200],[1,2,100],[1,3,300],[2,3,100]]\nsrc=0\ndst=3\nk=1",
    "n=3\nflights=[[1,0,100],[1,2,200],[0,2,100]]\nsrc=1\ndst=2\nk=1"
]
EXPECTED = [
    "500",
    "200"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
