#{ 
 # Driver Code Starts

# } Driver Code Ends
def reverse(S):
    stack=[]
    for i in range(len(S)):
        stack.append(S[i])
    c=""
    while(len(stack)!=0):
        c=c+stack.pop()
    return c
    #Add code here
    

#{ 
 # Driver Code Starts.
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        str1=input()
        print(reverse(str1))
# } Driver Code Ends
