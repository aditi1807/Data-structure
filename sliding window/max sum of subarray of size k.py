#User function Template for python3
class Solution:
    def maximumSumSubarray (self,K,Arr,N):
        # code here 
        window=Arr[0:K]
        windosum=sum(window)
        maxi=windosum
        for i in range(0,N-K):
            windosum=windosum-Arr[i]+Arr[i+K]
            maxi=max(windosum,maxi)
        return maxi
