import numpy as np
class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        rev = []
        for row in image:
            rev.append(row[::-1])
        return [[1 - x for x in row] for row in rev]
                
        