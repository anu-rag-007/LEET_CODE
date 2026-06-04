class Solution:
    def isPalindrome(self, s: str) -> bool:
        if not s.strip():
            return True
        s = s.lower()
        filter = ''.join(char for char in s if char.isalnum())
        rev = ""
        for i in range(len(filter)-1,-1,-1):
            rev += filter[i]
        return rev == filter