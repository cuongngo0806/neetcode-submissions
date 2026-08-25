class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        
        int i = 0, j = nums.size() - 1; // Initialize closed interval [0, n-1]
        while (i <= j) {
            int m = i + (j - i) / 2; // Calculate the midpoint index m
            if (nums[m][0] < target) {
                i = m + 1; // target is in the interval [m+1, j]
            } else if (nums[m][0] > target) {
                j = m - 1; // target is in the interval [i, m-1]
            } else {
                return true;
            }
        }
        int index = i-1;
        // j points to the rightmost target, i points to the first element greater than target
        if(index == -1) return false;
        else {
            i = 0, j = nums[index].size() - 1; // Initialize closed interval [0, n-1]
            while (i <= j) {
                int m = i + (j - i) / 2; // Calculate the midpoint index m
                if (nums[index][m] < target) {
                    i = m + 1; // target is in the interval [m+1, j]
                } else if (nums[index][m] > target) {
                    j = m - 1; // target is in the interval [i, m-1]
                } else {
                    return true;
                }
            }
        }

        return false;
    }
};