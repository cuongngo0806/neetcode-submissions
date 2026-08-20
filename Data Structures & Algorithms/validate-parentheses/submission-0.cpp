class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        for(auto x : s){
            if(x == '(' || x == '[' || x == '{') {
                check.push(x);
                continue;
            }
            if(check.empty()) return false;
            else {
                if(x == '}' && check.top() != '{') return false;
                if(x == ')' && check.top() != '(') return false;
                if(x == ']' && check.top() != '[') return false;
                check.pop();
            }
        }
        return check.empty();
    }
};
