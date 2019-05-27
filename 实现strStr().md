思路比较简单直接遍历 暴力求解
```
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if len(needle) == 0:
            return 0
        if len(haystack) == 0:
            return -1
        for i in range(len(haystack)):
            if haystack[i:i+len(needle)] == needle:
                return i
        return -1
                    
```
或者是直接调用list的index方法 配套上try,except会利用更短的time
```
try:
      index = haystack.index(needle)
      return index
except:
      return -1
```
