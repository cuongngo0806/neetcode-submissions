class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> s;
        int res = 0;
        int n = h.size();
        vector<int> leftMost(n,-1);
        vector<int> rightMost(n,n);
        for(int i = 0; i < n;i++){
            while(!s.empty() && h[i] <= h[s.top()]){
                s.pop();
            }
            if(!s.empty()) leftMost[i] = s.top();
            s.push(i);
        }
        while(!s.empty()) s.pop();
        for(int i = n-1; i >= 0;i--){
            while(!s.empty() && h[i] <= h[s.top()]){
                s.pop();
            }
            if(!s.empty()) rightMost[i] = s.top();
            s.push(i);
        }
        for(int i = 0; i < n; i++){
            int a = h[i] * (rightMost[i] - leftMost[i] - 1);
            res = max(res, a);
        }
        return res;
    }
};
