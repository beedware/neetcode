from __future__ import annotations
from typing import List, Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        pass

EXAMPLES = [
    "lists=[[1,2,4],[1,3,5],[3,6]]",
    "lists=[]",
    "lists=[[]]"
]
EXPECTED = [
    "[1,1,2,3,3,4,5,6]",
    "[]",
    "[]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
