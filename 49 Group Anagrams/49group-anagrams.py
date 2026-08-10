class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        from collections import defaultdict
        dic = defaultdict(list)
        for word in strs:
            lst = [0]*26
            for char in word:
                lst[ord(char) - ord('a')] += 1
            lst = tuple(lst)
            dic[lst].append(word)
        return list(dic.values())