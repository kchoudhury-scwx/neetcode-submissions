class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                res.push_back(i);
                res.push_back(mpp[target-nums[i]]);
                break;
            }
            else
            {
                mpp[nums[i]]=i;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
