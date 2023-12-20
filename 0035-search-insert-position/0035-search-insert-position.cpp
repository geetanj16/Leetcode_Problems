class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int s = 0;                  // Initialize the start index.
    int e = nums.size() - 1;    // Initialize the end index.
    int m = s + (e - s) / 2;    // Calculate the middle index.

    while (s <= e) {
        if (nums[m] == target) {
            return m;            // Target found at index 'm'.
        }
        if (nums[m] > target) {
            e = m - 1;           // Adjust the end index for the left half.
        } else {
            s = m + 1;           // Adjust the start index for the right half.
        }
        m = s + (e - s) / 2;     // Recalculate the middle index.
    }

    return s;                    // Return the insertion index.
}

};