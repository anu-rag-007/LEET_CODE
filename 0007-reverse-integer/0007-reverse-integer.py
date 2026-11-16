class Solution:
    def reverse(self, x: int) -> int:
        return (1 if x>=0 else -1)*int(str(abs(x))[::-1]) if int(str(abs(x))[::-1])<2**31-(x<0) else 0

    
