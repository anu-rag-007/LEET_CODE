class Solution:
    def checkDivisibility(self, n: int) -> bool:
        sum, product = 0, 1
        og = n
        while n > 0:
            sum += n%10
            product *= n%10
            n//=10
        
        return og % (sum + product) == 0