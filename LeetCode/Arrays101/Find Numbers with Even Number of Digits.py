class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        ans = 0
        for l in nums:
            if len(str(l)) % 2 == 0:
                ans += 1
        return ans
