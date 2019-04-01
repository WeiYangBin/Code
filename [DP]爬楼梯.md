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
