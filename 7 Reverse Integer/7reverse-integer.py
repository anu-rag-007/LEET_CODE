class Solution:
    def reverse(self, x: int) -> int:
        rev = 0
        sign = -1 if x < 0 else 1
        rev = int(str(abs(x))[::-1])*sign
        if rev < -2**31 or rev > 2**31:
            return 0
        
        return rev

    
