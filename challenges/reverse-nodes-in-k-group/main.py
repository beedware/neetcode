from __future__ import annotations
from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        pass

EXAMPLES = [
    "head=[1,2,3,4,5,6]\nk=3",
    "head=[1,2,3,4,5]\nk=3"
]
EXPECTED = [
    "[3,2,1,6,5,4]",
    "[3,2,1,4,5]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
