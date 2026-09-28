class Solution:
    def finalPrices(self, prices: list[int]) -> list[int]:
        for i in range(len(prices)-1):
            j = i+1
            while j < len(prices):
                if prices[j] <= prices[i]:
                    prices[i] -= prices[j]
                    break
                else:
                    j+=1
        return prices
                
         