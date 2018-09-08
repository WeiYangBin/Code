思路比较简单就是利用list的切片方法进行解答便可
```
class Solution:
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        hlen = len(haystack)
        nlen = len(needle)
        for i in range(hlen - nlen + 1):
            if haystack[i:i+nlen] == needle:
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
