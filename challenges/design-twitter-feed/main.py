from typing import List

class Twitter:

    def __init__(self):
        pass


    def postTweet(self, userId: int, tweetId: int) -> None:
        pass


    def getNewsFeed(self, userId: int) -> List[int]:
        pass


    def follow(self, followerId: int, followeeId: int) -> None:
        pass


    def unfollow(self, followerId: int, followeeId: int) -> None:
        pass

EXAMPLES = [
    "[\"Twitter\", \"postTweet\", [1, 10], \"postTweet\", [2, 20], \"getNewsFeed\", [1], \"getNewsFeed\", [2], \"follow\", [1, 2], \"getNewsFeed\", [1], \"getNewsFeed\", [2], \"unfollow\", [1, 2], \"getNewsFeed\", [1]]"
]
EXPECTED = [
    "[null, null, null, [10], [20], null, [20, 10], [20], null, [10]]"
]


if __name__ == "__main__":
    from pathlib import Path
    import sys

    sys.path.append(str(Path(__file__).resolve().parents[2] / "helper"))
    from python_runner import run_examples

    run_examples(globals(), EXAMPLES, EXPECTED)
