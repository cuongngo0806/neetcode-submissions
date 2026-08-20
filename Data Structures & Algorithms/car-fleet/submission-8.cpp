class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> c;
        for(int i = 0 ; i < speed.size(); i++){
            c.push_back({position[i], speed[i]});
        }
        sort(c.rbegin(), c.rend());
        stack<double> t;
        for(int i = 0 ; i < speed.size(); i++) {
            auto p = c[i];
            double time  = (target - p.first)*1.0/p.second;
            if(!t.empty() && time <= t.top()) continue;
            t.push(time);
        }
        return t.size();
    }
};
