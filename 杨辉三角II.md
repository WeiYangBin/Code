与三角一一样的方法，因为存储在一个list里面所以只需要在返回值那边改一下就可以了
```
class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        result = [[1], [1, 1]]
        if rowIndex == 0:
            return result[0]
        if rowIndex == 1:
            return result[1]
        
        for i in range(2, rowIndex + 1):
            layer = []
            for j in range(i + 1):
                if j == 0 or j == i:
                    layer.append(1)
                else:
                    layer.append(result[i - 1][j - 1] + result[i - 1][j])
                    
            result.append(layer)
        return result[rowIndex]
```
