class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<unsigned int> check_character(26,0);
        if(s.size() == 0 || t.size() == 0){
            return false;
        }
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++){
            check_character[s[i] - 'a'] +=1;
        }
        for(int i = 0; i < t.size(); i++){
            check_character[t[i] - 'a'] -=1;
        }
        for(auto count : check_character){
            if(count != 0) return false;
        }
        return true;
    }
};
