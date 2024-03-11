class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1; 
        while (left <= right) { // Changed condition to include equal sign
            int mid = left + (right - left) / 2; // Corrected the calculation of mid
            if (nums[mid] == target) {
                return mid; // Return index of the target
            } else if (nums[mid] > target) {
                right = mid - 1; // Update right boundary
            } else {
                left = mid + 1; // Update left boundary
            }
        }
        return -1;
    }
};
