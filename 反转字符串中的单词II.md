```
class Solution:
    def reverseWords(self, s: str) -> str:
        tmp = s.split()
        result = ''
        for i in tmp:
            result += i[::-1] + ' '
            
            temp = s.split(' ')
        # 去掉最后一个空格
        return result[:-1]
```
