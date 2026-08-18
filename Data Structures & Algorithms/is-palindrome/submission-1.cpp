class Solution {
public:
    bool isPalindrome(string s) {
        string newstr = "";
        for(auto x : s){
            if(isalnum(x)){
                newstr += tolower(x);
            }
        }
        return newstr == string(newstr.rbegin(), newstr.rend());
    }
};
