class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int, int> lists;
        for(auto x : nums){
            lists[x]++;
        }
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(auto x : lists){
            if(minHeap.size() < k){
                minHeap.push({x.second, x.first});
            }else {
                if(x.second > minHeap.top().first){
                    minHeap.pop();
                    minHeap.push({x.second, x.first});
                }
            }
        }
        while(!minHeap.empty()){
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return res;
    }
};
