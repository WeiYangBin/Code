针对有序数列，使用二分查找 从矩阵的右下角或者左上角开始查找
```
class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        m = len(matrix)
        if m == 0:
            return False
         
        n = len(matrix[0])
        if n == 0:
            return False
             
        i, j = 0, n - 1
        while i < m and j >= 0:
            if matrix[i][j] == target:
                return True
            elif matrix[i][j] > target:
                j -= 1
            else:
                i += 1
                 
        return False
```

```
class Solution:
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        
        r = len(matrix)
        if r == 0:
            return False
         
        c = len(matrix[0])
        if c == 0:
            return False
        
        i, j = r - 1, 0
        while i >= 0 and j < c:
            if matrix[i][j] == target:
                return True
            elif matrix[i][j] > target:
                i -= 1
            else:
                j += 1

        return False
```
