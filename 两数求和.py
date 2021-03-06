"""
思路：定义dic，利用dic的enumerate方法，利用求得key去寻找value，然后输出两个
"""
def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]

        """
        dic = {}
        for index, item in enumerate(nums):
            if item in dic:
                return[dic[item], index]
            else:
                dic[target - item] = index
