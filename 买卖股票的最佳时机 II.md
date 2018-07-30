#### 买卖股票的最佳时机 II

```
class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        Profit = 0
        i = 0
        while i < len(prices)-1:
            if prices[i+1] > prices[i]:
                Profit += prices[i+1] - prices[i]
            i += 1
        return Profit
```
