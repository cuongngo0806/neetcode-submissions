class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int> valid;
        for(auto x : nums){
            valid.insert(x);
        }
        int max = 1;
        int count = 1;
        int node = valid.extract(valid.begin()).value();
        for(auto x : valid){
            cout << x << endl;
            if(x - node == 1){
                count++;
            } else{
                max  = (count > max) ? count : max;
                count = 1;
            }
            node  = x;
        }
        max  = (count > max) ? count : max;
        return max;
    }
};
