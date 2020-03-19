"""
三路快排， 遍历一次即可完成排序，实时交换
"""
class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        
        left = -1 
        right = n
        i = 0
        
        while i < right:
            if nums[i] == 0:
                left += 1
                nums[left], nums[i] = nums[i], nums[left]
                i += 1
            elif nums[i] == 2:
                right -= 1
                nums[right], nums[i] = nums[i], nums[right]
            else:
                i += 1
