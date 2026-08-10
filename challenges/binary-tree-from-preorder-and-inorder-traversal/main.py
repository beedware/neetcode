from __future__ import annotations
from typing import List, Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        pass

EXAMPLES = [
    "preorder=[1,2,3,4]\ninorder=[2,1,3,4]",
    "preorder=[1]\ninorder=[1]"
]
EXPECTED = [
    "[1,2,3,null,null,null,4]",
    "[1]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
