class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        string devideString = "\n";
        for(auto x : strs){
            res += x;
            res += devideString;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string str;
        for(auto x : s){
            if(x == '\n') {
                res.push_back(str);
                str = "";
            } else{
                str += x;
            }
        }
        return res;
    }
};
