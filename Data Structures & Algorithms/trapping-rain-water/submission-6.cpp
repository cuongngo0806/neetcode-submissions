class Solution {
public:
    int trap(vector<int>& h) {
        int res  = 0;
        int l =  0;
        int r = h.size()-1;
        int lm = h[0];
        int rm = h[h.size()-1];
        while(l < r){
            if(lm < rm){
                l++;
                lm = max(h[l], lm);
                res += lm - h[l];
            } else{
                r--;
                rm = max(h[r], rm);
                res += rm - h[r];
            }
        }
        return res;
    }
};
