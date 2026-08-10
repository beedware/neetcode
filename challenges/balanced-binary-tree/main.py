from __future__ import annotations
from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        pass

EXAMPLES = [
    "root=[1,2,3,null,null,4]",
    "root=[1,2,3,null,null,4,null,5]",
    "root=[]"
]
EXPECTED = [
    "true",
    "false",
    "true"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
