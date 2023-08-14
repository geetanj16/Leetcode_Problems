// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = size(nums), ans=INT_MIN;
        
//         for(int i=0;i<n;i++){
//             for(int j=i,curSum=0;j<n;j++){
//                 curSum+=nums[j];
//                 ans = max(ans, curSum);
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currentSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        
        return maxSum;
    }
};


