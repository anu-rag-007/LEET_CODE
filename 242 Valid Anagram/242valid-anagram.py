class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s = ''.join(sorted(s))
        t = ''.join(sorted(t))
        
        if len(s) != len(t):
            return False

        a = ""

        for i in range(len(s)):
            if s[i] == t[i]:
                a += s[i]

        if a == s:
            return True
        else:
            return False
                    