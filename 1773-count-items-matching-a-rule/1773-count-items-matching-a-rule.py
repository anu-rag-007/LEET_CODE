class Solution(object):
    def countMatches(self, items, ruleKey, ruleValue):
        """
        :type items: List[List[str]]
        :type ruleKey: str
        :type ruleValue: str
        :rtype: int
        """
        return sum([item[{'type':0,'color':1,'name':2}[ruleKey]] == ruleValue for item in items])