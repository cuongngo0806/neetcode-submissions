class Solution {
public:
    int maxArea(vector<int>& h) {
        int max = 0;
        int l = 0;
        int r = h.size()-1;
        while(l < r){
            int c = min(h[l], h[r]) * (r-l);
            if(c > max) {
                max = c;
            }
            if(h[l] >= h[r]) r--;
            else l++;
        }
        return max;
    }
};
