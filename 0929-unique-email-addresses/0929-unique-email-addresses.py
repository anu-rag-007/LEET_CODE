class Solution:
    def numUniqueEmails(self, emails: list[str]) -> int:
        return len({(a.split('+')[0].replace('.',''),b) for a,b in (e.split('@') for e in emails)})