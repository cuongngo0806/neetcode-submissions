class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mapCompensation; // value Compensation to target, index in value
        for(int index = 0; index < nums.size(); index++){
            if(mapCompensation.find(nums[index]) != mapCompensation.end()){
                return {mapCompensation[nums[index]], index};
            }else{
                mapCompensation[target-nums[index]] = index;
            }
        }
       return {-1,-1};
    }
};
