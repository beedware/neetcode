from __future__ import annotations
from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        pass

EXAMPLES = [
    "root=[4,2,7,1,3,6,9]",
    "root=[2,1,3]",
    "root=[]"
]
EXPECTED = [
    "[1,3,2,7,6,5,4]",
    "[3,1,2]",
    "[]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
