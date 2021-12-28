class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            int sqr = nums[i]*nums[i];
            nums[i]=sqr;
        }
         sort(nums.begin(),nums.end());
         return nums;
    }
};