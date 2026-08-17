class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        long long products = 1;
        int index_zero = 0;
        bool continue_products = false;
        for(int  i = 0; i < nums.size(); i ++){
            if(nums[i] != 0){
                products *= nums[i];
            }else{
                if(continue_products) return res;
                if(index_zero == 0){
                    index_zero = i;
                    continue_products = true;
                }     
            }
        }
        if(continue_products) {
            res[index_zero] =  products;
            return res;
        } else {
            for (int  i = 0; i < nums.size(); i ++){
                res[i] = products/nums[i];
            }
            return res;
        }
    }
};
