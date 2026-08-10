class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        pass

EXAMPLES = [
    "s1=\"aaaa\"\ns2=\"bbbb\"\ns3=\"aabbbbaa\"",
    "s1=\"\"\ns2=\"\"\ns3=\"\"",
    "s1=\"abc\"\ns2=\"xyz\"\ns3=\"abxzcy\""
]
EXPECTED = [
    "true",
    "true",
    "false"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
