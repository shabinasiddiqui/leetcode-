# problem link: https://leetcode.com/problems/counting-bits/

class Solution:
    
    def countBits(self, n: int) -> List[int]:
        ans =[]
        for i in range(n+1):
            num=bin(i).replace("0b","")
            ans.append(num.count('1'))
        return ans