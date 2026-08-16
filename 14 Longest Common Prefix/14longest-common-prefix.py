class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs:
            return ""
        prefix = ""

        for char in zip(*strs):
            if len(set(char)) > 1:
                break
            prefix+=char[0]
        return prefix
        