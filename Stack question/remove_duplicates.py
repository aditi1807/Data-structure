class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        stack = []
        last_occurrence=[]
        visited=[]
        for i in range(26):
            last_occurrence.append(0)
            visited.append(False)
        for i in range(len(s)):
            last_occurrence[ord(s[i])-97] = i
        for i in range(len(s)):
            if visited[ord(s[i])-97]:
                continue
            while stack and s[i] < stack[-1] and last_occurrence[ord(stack[-1])-97] > i:
                visited[(ord(stack.pop())-97)]=False
            stack.append(s[i])
            visited[ord(s[i])-97]=True
        return "".join(stack)
