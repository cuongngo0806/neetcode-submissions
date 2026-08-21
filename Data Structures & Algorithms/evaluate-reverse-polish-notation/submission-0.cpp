class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> n;
        for(auto x : tokens){
            if(x == "+"){
                if(!n.empty()){
                    int first = n.top();
                    n.pop();
                    int second = n.top();
                    n.pop();
                    n.push(first+second);
                }
            }
            else if(x == "-"){
                if(!n.empty()){
                    int first = n.top();
                    n.pop();
                    int second = n.top();
                    n.pop();
                    n.push(second-first);
                }
            }
            else if(x == "*"){
                if(!n.empty()){
                    int first = n.top();
                    n.pop();
                    int second = n.top();
                    n.pop();
                    n.push(first*second);
                }
            }
            else if(x == "/"){
                if(!n.empty()){
                    int first = n.top();
                    n.pop();
                    int second = n.top();
                    n.pop();
                    n.push(second/first);
                }
            } else {
                n.push(stoi(x));
            }
        }
        return n.top();
    }
};
