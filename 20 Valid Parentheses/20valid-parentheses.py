class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        matches = {')':'(','}':'{',']':'['}

        for char in s:
            if char in '({[':
                stack.append(char)
        
            elif char in ')}]':
                if not stack or stack[-1] != matches[char]:
                    return False
                stack.pop()
        
        return len(stack)==0