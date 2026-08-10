from __future__ import annotations
from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Codec:

    # Encodes a tree to a single string.
    def serialize(self, root: Optional[TreeNode]) -> str:
        pass


    # Decodes your encoded data to tree.
    def deserialize(self, data: str) -> Optional[TreeNode]:
        pass

EXAMPLES = [
    "root=[1,2,3,null,null,4,5]",
    "root=[]"
]
EXPECTED = [
    "[1,2,3,null,null,4,5]",
    "[]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
