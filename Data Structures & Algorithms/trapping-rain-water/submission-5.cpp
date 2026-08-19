class Solution {
public:
    int trap(vector<int>& h) {
       stack<int> c;
       int res = 0;
       for(int i = 0; i < h.size(); i++){
            while(!c.empty() && h[i] > h[c.top()]){
                int b =  h[c.top()];
                c.pop();
                if(!c.empty()){
                    int h2 = min(h[i], h[c.top()]) - b;
                    int w =  i - c.top() - 1;
                    res += (w*h2);
                }
            }
            c.push(i);
       }
       return res;
    }
};
