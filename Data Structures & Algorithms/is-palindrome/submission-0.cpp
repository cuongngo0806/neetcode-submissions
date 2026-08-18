class Solution {
public:
    bool isPalindrome(string s) {
        char *start = &s[0];
        char *end = &s[s.length()-1];
        while(end > start){
            while(end > start && !isalnum(*start)) start++;
            while(end >start && !isalnum(*end)) end--;
            if(tolower(*start) != tolower(*end)) return false;
            else {
                start++;
                end--;
            }
        }
        return true;
    }
};
