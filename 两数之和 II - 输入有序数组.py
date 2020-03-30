"""
双指针对撞即可，双层for循环超时
"""
class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        i, j = 0, len(numbers) - 1
        while target != numbers[i] + numbers[j]:
            if target - numbers[i] < numbers[j]:
                j -= 1
            if target - numbers[i] > numbers[j]:
                i += 1
            if target - numbers[i] == numbers[j]:
                return [i+1, j+1]
                        
        return [i+1, j+1]
