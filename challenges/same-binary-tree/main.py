from __future__ import annotations
from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        pass

EXAMPLES = [
    "p=[1,2,3]\nq=[1,2,3]",
    "p=[4,7]\nq=[4,null,7]",
    "p=[1,2,3]\nq=[1,3,2]"
]
EXPECTED = [
    "true",
    "false",
    "false"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
