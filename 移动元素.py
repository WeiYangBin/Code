"""
双指针 一开始一直想着如何删除多余部分，然后发现有一句无需考虑超出长度
"""
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        lastNoneValPoint = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[lastNoneValPoint] = nums[i]
                lastNoneValPoint += 1
        return lastNoneValPoint
                
            
