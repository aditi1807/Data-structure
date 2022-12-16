# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        start1,start2=list1,list2
        list3=ListNode()
        start=list3
        while(start1!=None and start2!=None):
            if start1.val<=start2.val:
                start.next=start1
                start1=start1.next
            else:
                start.next=start2
                start2=start2.next
            start=start.next
        if start1!=None:
            start.next=start1
            
        else:
            start.next=start2
            
        return list3.next
        
