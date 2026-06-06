class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        from collections import Counter
        have = Counter(magazine)

        for char in ransomNote:
            if have[char] == 0:
                return False
            have[char] -= 1
        return True