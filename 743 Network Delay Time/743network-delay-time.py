import heapq
class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        graph = defaultdict(list)
        for u,v,time in times:
            graph[u].append((v,time))
        
        min_time = {}
        min_heap = [(0,k)]

        while min_heap:
            time_k_to_i,i = heapq.heappop(min_heap)
            if i in min_time:
                continue
            
            min_time[i] = time_k_to_i
            for nei,nei_time in graph[i]:
                if nei not in min_time:
                    heapq.heappush(min_heap,(time_k_to_i + nei_time,nei))

        if len(min_time) == n:
            return max(min_time.values())
        else:
            return -1