class Solution:
    def mostWordsFound(self, sentences: list[str]) -> int:
        return max(len(s.split()) for s in sentences)