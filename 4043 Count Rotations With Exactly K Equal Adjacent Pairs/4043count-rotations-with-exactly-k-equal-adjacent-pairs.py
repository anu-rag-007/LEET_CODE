class Solution:
    def countRotations(self, s: str, k: int) -> int:
        score,ans = 0,0
        a = s
        extended = a + a
        for i in range(len(a)):
            rot = extended[i:i+len(a)]
            score = 0
            for j in range(len(rot)-1):
                if rot[j] == rot[j+1]:
                    score += 1
            if score == k:
                ans += 1
        return ans