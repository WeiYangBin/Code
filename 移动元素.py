"""
双指针
"""
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        lastNoneValPoint = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[lastNoneValPoint] = nums[i]
                lastNoneValPoint += 1
                print(lastNoneValPoint)
        del nums[lastNoneValPoint:]
                
            
