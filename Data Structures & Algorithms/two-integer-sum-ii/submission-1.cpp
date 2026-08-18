class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int , int> mp;
        for(int i = 0; i < numbers.size(); i++){
            int x = target - numbers[i];
            if(mp.find(x) != mp.end()) {
                return {mp[x]+1, i+1};
            }
            else 
            {
                mp.insert({numbers[i], i});
            }
        }
        return {};
    }
};
