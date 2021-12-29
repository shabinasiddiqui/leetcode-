class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> v;
        int right = n-1,left=0;
        while(left<=right){
            if(numbers[left]+numbers[right]==target){
                v.push_back(left+1);
                v.push_back(right+1);
              break;
                
            }
           else if(numbers[left]+numbers[right]>target){
                right--;
            }
            else if(numbers[left]+numbers[right]<target){
                left++;
            }
            
        }
        return v;
        
        
    }
};