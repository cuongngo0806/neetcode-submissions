class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> list_num;
        for(auto num : nums){
            if(list_num.find(num) != list_num.end()){
                return true;
            }
            list_num.insert(num);
        }
        return false;
    }
};
