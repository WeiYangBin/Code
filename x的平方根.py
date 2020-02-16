看到题目的第一印象，我天不用sqrt(),真不知道怎么求平方根了，WC
还是牛顿🐂🛡️比较强，无敌
```
class Solution:
    def mySqrt(self, x: int) -> int:
        # 牛顿迭代法
        if x <= 1:
            return x
        res = x
        while res > x / res:
            res = (res + x / res) // 2
        return int(res)
```
