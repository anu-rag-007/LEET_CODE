import numpy as np
class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        return [[1-x for x in row[::-1]] for row in image]
                
        