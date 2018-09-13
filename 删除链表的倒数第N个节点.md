先去算出链表长度，然后在利用长度减去导数位置的长度再减去一找到对应位置，将next指向下一个便可
```
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        length = 0 
        p = head
        while(p):
            length += 1
            p = p.next
        p = head
        index = length - n
        if index == 0:
            return p.next
        for i in range(length):
            if i == index - 1:
                p.next = p.next.next
                return head
            else:
                p = p.next
```
