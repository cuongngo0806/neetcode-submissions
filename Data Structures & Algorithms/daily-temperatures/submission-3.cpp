class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> res(t.size(), 0);
        stack<pair<int, int>> c;
        for(int i = 0; i < t.size(); i++){
            while(!c.empty() && t[i] > c.top().first){
                auto p = c.top();
                c.pop();
                res[p.second] = i - p.second; 
            }
            c.push({t[i], i});
        }
        return res;
    }
};
