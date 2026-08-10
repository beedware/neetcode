from __future__ import annotations

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        pass

EXAMPLES = [
    "root=[5,3,8,1,4,7,9,null,2]\np=3\nq=8",
    "root=[5,3,8,1,4,7,9,null,2]\np=3\nq=4"
]
EXPECTED = [
    "5",
    "3"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
