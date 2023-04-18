class Solution:
    def isValid(self, s: str) -> bool:
        stack=[]
        stack.append(0)
        opening=['(','[','{']
        for i in range(len(s)):
            if s[i] in opening:
                stack.append(s[i])
            elif len(stack)!=0:
                if s[i]==')' and stack[-1]=='(':
                    stack.pop()
                elif s[i]==']' and stack[-1]=='[':
                    stack.pop()
                elif s[i]=='}' and stack[-1]=='{':
                    stack.pop()
                else:
                    return False
        if stack[-1]==0:
            return True
        else:
            return False
