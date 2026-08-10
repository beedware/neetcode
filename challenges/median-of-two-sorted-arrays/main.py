from typing import List

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        pass

EXAMPLES = [
    "nums1=[1,2]\nnums2=[3]",
    "nums1=[1,3]\nnums2=[2,4]"
]
EXPECTED = [
    "2.0",
    "2.5"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
