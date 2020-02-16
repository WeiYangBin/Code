
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        tmp = ListNode(0)
        res = tmp
        flag = 0
        while l1 or l2:
            s = 0
            if l1:
                s = l1.val
                l1 = l1.next
            if l2:
                s = s + l2.val
                l2 = l2.next
            # 取个位数
            tmp_sum = ((s + flag) % 10)
            # 如果大于10 用于进位
            flag = ((s + flag) // 10)
            res.next = ListNode(tmp_sum)
            res = res.next
        # 执行结束如若flag = 1; 则加一
        if flag:
            res.next = ListNode(1)
        res = tmp.next
        return res
    
