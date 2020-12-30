#link : 
class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        arr = nums
        
        cnt = 0
        max_ = 0
        for a in arr:
            if a == 1:
                cnt = cnt + 1
            if max_ < cnt:
                max_ = cnt
            if a == 0:
                cnt = 0
        if len(arr) == 1: 
            return cnt
        else: return max_
