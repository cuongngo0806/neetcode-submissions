class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int res = 0;
        while(l <= r){
            int m = (l+r)/2;
            int total = 0;
            for(auto x : piles){
                total += ceil(x*1.0/m);
            }
            if(total <= h){
                res = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return res;
    }
};
