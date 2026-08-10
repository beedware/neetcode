from typing import List

class Solution:
    def findItinerary(self, tickets: List[List[str]]) -> List[str]:
        pass

EXAMPLES = [
    "tickets=[[\"BUF\",\"HOU\"],[\"HOU\",\"SEA\"],[\"JFK\",\"BUF\"]]",
    "tickets=[[\"HOU\",\"JFK\"],[\"SEA\",\"JFK\"],[\"JFK\",\"SEA\"],[\"JFK\",\"HOU\"]]"
]
EXPECTED = [
    "[\"JFK\",\"BUF\",\"HOU\",\"SEA\"]",
    "[\"JFK\",\"HOU\",\"JFK\",\"SEA\",\"JFK\"]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
