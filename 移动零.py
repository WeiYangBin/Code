"""
思路挺简单的，就是我们先遍历一边nums，统计0的个数，在遍历的过程中删除每一个找到的0，最后只需要在最后添加多少个零就好
"""
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i = 0 
        count = 0
        while i < len(nums):
            if nums[i] == 0:
                count += 1
                del nums[i]
            else:
                i += 1
                
        for i in range(count):
            nums.append(0)
                
