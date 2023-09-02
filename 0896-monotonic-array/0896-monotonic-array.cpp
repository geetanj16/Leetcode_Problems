class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool is_increasing = true;
        bool is_decreasing = true;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                is_increasing =false;
            }
            if(nums[i]>nums[i-1]){
                is_decreasing = false;
            }
            
        }
        return is_increasing||is_decreasing;
    }
};