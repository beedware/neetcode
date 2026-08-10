from __future__ import annotations
from typing import List, Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        pass

EXAMPLES = [
    "root=[1,2,3,null,4,null,5]",
    "root=[1,2,3,4,null,null,null,5]"
]
EXPECTED = [
    "[1,3,5]",
    "[1,3,4,5]",
    "[1,2]",
    "[]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
