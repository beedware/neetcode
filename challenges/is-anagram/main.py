class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if len(s) != len(t):
            return False

        counter = {}
        for char in s:
            counter[char] = counter.get(char, 0) + 1


        for char in t:
            if counter.get(char, 0) == 0 or counter[char] - 1 < 0:
                return False
            counter[char] -= 1

        return True


EXAMPLES = ['s="racecar", t="carrace"', 's="jar", t="jam"']
EXPECTED = ["true", "false"]


if __name__ == "__main__":
    import sys
    from pathlib import Path

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
