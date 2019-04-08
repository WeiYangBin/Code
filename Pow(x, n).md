利用折半递归的方法，  如果指数为偶数：pow(x * x, n / 2), 如果指数为奇数： pow(x, n - 1) * x
例如 2的8次幂 等价于2的4次幂的平方， 2的4次幂又等价于2的2次幂的平方， 2的2次幂等价于2的1次幂的平方， 2的1次幂等价于2的0次幂的平方再乘以2
```
class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 0:
            return 1.0
        if n < 0:
            x = 1 / x
            n = -n
        if n % 2:
            return x * self.myPow(x, n - 1)
        return self.myPow(x * x, n / 2)
```
