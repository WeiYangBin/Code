针对有序数列，使用二分查找 从矩阵的右下角或者左上角开始查找
```
class Solution:
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        #此处row, col不能写成 row, col = len(matrix), col(matrix[0])因为有可能不存在，固应该分开写
        row = len(matrix)
        if row == 0:
            return False
        
        col = len(matrix[0])
        if col == 0:
            return False
        
        i, j = 0, col - 1
        while i < row and j >= 0:
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
