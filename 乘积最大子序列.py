"""
用了一个dp不行,不要两个，卡了
"""
class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        if not nums:   
            return 0
        res, curMax, curMin = nums[0], nums[0], nums[0]
        for num in nums[1:]:
            curMax = curMax * num
            curMin = curMin * num
            curMax, curMin = max(curMax, curMin, num), min(curMax, curMin, num)
            res = max(res, curMax)
        
        return res

