```
class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        l = []
        for i in range(1, n + 1):
            if i % 3 == 0 and i % 5 != 0:
                l.append('Fizz')
            if i % 5 == 0 and i % 3 != 0:
                l.append('Buzz')
            if i % 5 == 0 and i % 3 == 0:
                l.append('FizzBuzz')
            if i % 5 != 0 and i % 3 != 0:
                l.append(str(i))
                
        return l
```
