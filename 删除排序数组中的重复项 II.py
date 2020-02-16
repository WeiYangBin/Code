class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        count = 0
        lastPointer = 0
        while lastPointer < len(nums):
            for i in range(lastPointer, len(nums)):
                if nums[lastPointer] == nums[i]:
                    count += 1
            
            if count > 2:
                while (count - 2) != 0:
                    del nums[lastPointer]
                    count -= 1
                    
                count = 0
                lastPointer += 2
            
            else:
                count = 0
                lastPointer += 1
    
        return lastPointer
