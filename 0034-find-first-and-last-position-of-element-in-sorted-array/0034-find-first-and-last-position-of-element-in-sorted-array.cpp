#include <vector>
#include <iostream>

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = findFirstOccurrence(nums, target);
        int end = findLastOccurrence(nums, target);
        return {start, end};
    }

    int findFirstOccurrence(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                result = mid;
                end = mid - 1;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return result;
    }

    int findLastOccurrence(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int result = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                result = mid;
                start = mid + 1; 
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return result;
    }
};
