##### 主要思路就是先把nums1中每个元素的个数放入字典中，并进行统计，然后在去nums2中对比，每当nums2中有一个元素与nums1相交时，就将字典dic中的个数减一，
并且将相交的元素放入结果序列中  
```
class Solution:
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        result = []
        dic = {}
        for x in nums1:
            if x not in dic:
                dic[x] = 1
            else:
                dic[x] += 1
        for x in nums2:
            if x in dic and dic[x] > 0:
                dic[x] -= 1
                result.append(x)
                
        return result
```
