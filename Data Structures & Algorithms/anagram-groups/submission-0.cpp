class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 1) return {strs};
        vector<vector<string>> res;
        map<vector<int>, vector<string>> list;
        for(auto x : strs){
            vector<int> tmp(26, 0);
            for(auto c : x){
                tmp[c - 'a']++;
            }
            list[tmp].push_back(x);
        }
        for(auto it: list){
            res.push_back(it.second);
        }
        return res;
    }
};
