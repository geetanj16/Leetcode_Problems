class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        std::vector<int> rotated(nums);
        for(int i=0;i<n;i++){
            nums[(i+k)%n]=rotated[i];
        }
    }
};