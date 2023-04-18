class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        stack=[]
        arr=nums[::-1]
        stack=[]
        stack=stack+arr
        op=[]
        for i in range(len(arr)):
            if len(stack)==0:
                op.append(-1)
                stack.append(arr[i])
            elif arr[i]<stack[-1]:
                op.append(stack[-1])
                stack.append(arr[i])
            else:
                while(len(stack)!=0 and stack[-1]<=arr[i]):
                    stack.pop()
                if len(stack)==0:
                    op.append(-1)
                else:
                    op.append(stack[-1])
                stack.append(arr[i])
        return op[::-1]
