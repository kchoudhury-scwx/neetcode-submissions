class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix_prod = 1;
        int suffix_prod = 1;
        vector<int> prefix_prod_array;
        vector<int> suffix_prod_array(nums.size(),0);
        for(int i: nums)
        {
            prefix_prod*=i;
            prefix_prod_array.push_back(prefix_prod);
        }
        for(int j=nums.size()-1;j>=0;j--)
        {
            suffix_prod*=nums[j];
            suffix_prod_array[j]=suffix_prod;
        }
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            res.push_back(suffix_prod_array[i+1]);
            else if(i==nums.size()-1)
            res.push_back(prefix_prod_array[i-1]);
            else
            res.push_back(suffix_prod_array[i+1]*prefix_prod_array[i-1]);
        }
        return res;
    }
};
