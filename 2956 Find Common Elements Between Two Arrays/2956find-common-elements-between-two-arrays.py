class Solution:
    def findIntersectionValues(self, nums1: List[int], nums2: List[int]) -> List[int]:
        i_count,j_count = 0,0
        ans = []
        for i in range(len(nums1)):
            if nums1[i] in nums2:
                i_count+=1
        ans.append(i_count)
        for j in range(len(nums2)):
            if nums2[j] in nums1:
                j_count+=1
        ans.append(j_count)

        return ans
