class Solution:
    def sumDecoded(self, nums: list[int]) -> int:
        decoded = 0
        MOD = 10**9 + 7
        for num in nums:
            width = num%10
            d = num//10
            d_str = str(d)
            x_str = d_str[:width]
            y_str = d_str[width:]
            x = int(x_str) if x_str else 0
            y = int(y_str) if y_str else 0
            decoded = (decoded + pow(x,y,MOD)) % MOD 
        return decoded
            