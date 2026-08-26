class Solution {
public:
    int findMin(vector<int> &nums) {
        auto it = max_element(nums.begin(), nums.end());
        int idx = it - nums.begin();
        return (idx == nums.size() - 1) ? nums[0] : nums[idx + 1];
    }
};
