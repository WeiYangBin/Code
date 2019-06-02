```
class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        f = [1, 1]
        if n >= 2:
            for i in range(2, n + 1):
                f.append(f[i - 1] + f[i - 2])
        return f[n]
            
```
形如斐波那契数列
```
class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1:
            return 1
        dp = [0] * (n + 1)
        dp[1] = 1
        dp[2] = 2
        for i in range(3, n + 1):
            dp[i] = dp[i -1] + dp[i -2]
            
        return dp[n]
```
