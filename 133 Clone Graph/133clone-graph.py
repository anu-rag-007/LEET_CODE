"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

from typing import Optional
class Solution:
    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
        if not node:
            return None
        
        old_new_map = {}

        def dfs(n):
            if n in old_new_map:
                return old_new_map[n]
            
            copy = Node(n.val)
            old_new_map[n] = copy
            
            for neighbor in n.neighbors:
                copy.neighbors.append(dfs(neighbor))
                
            return copy

        return dfs(node)
        