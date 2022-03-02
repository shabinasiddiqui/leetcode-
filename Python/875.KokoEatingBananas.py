#problem link: https://leetcode.com/problems/koko-eating-bananas/

class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left,right = 1,max(piles)
        res = right
        while left<=right:
            hours =0
            k = (left+right)//2
            for i in piles:
                hours+=math.ceil(i/k)
                
            if hours<=h:
                right= k-1
                res =min(res,k)
            else:
                left=k+1
        return res
        