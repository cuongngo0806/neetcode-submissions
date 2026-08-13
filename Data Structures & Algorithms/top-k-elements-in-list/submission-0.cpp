class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int, int> lists;
        for(auto x : nums){
            lists[x]++;
        }
        std::multimap<int , int, std::greater<int>> list2;
        for(auto [key, value] : lists){
            list2.insert({value,key});
        }
        auto it = list2.begin();
        for(int i = 0; i < k; i++){
            res.push_back(it->second);
            it++;
        }
        return res;
    }
};
