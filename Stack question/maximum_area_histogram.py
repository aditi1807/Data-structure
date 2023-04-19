class Solution:
    def trap(self, height: List[int]) -> int:
        if height==None:
            return 0
        l=0
        r=len(height)-1
        left=height[l]
        right=height[r]
        result=0
        while(l<r):
            if left<right:
                l+=1
                left=max(left,height[l])
                result+=left-height[l]
            else:
                r-=1
                right=max(right,height[r])
                result+=right-height[r]
        return result
