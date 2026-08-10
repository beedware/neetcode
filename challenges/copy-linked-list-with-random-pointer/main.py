from __future__ import annotations
from typing import Optional

# Definition for a Node.
class Node:
    def __init__(self, val=0, neighbors=None, next=None, random=None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
        self.next = next
        self.random = random

"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        pass

EXAMPLES = [
    "head=[[3,null],[7,3],[4,0],[5,1]]",
    "head=[[1,null],[2,2],[3,2]]"
]
EXPECTED = [
    "[[3,null],[7,3],[4,0],[5,1]]",
    "[[1,null],[2,2],[3,2]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
