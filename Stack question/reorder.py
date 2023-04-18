class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        if head==None or head.next==None:
            return head
        slow=head
        fast=head
        while(fast!=None and fast.next!=None):
            slow=slow.next
            fast=fast.next.next
        prev=None
        nxt=None
        start=slow.next
        while(start!=None):
            nxt=start.next
            start.next=prev
            prev=start
            start=nxt
        second=prev
        slow.next=None
        curr=head
        while(second):
            temp1=curr.next
            temp2=second.next
            second.next=temp1
            curr.next=second
            second=temp2
            curr=temp1
        return head
            
        
Console
