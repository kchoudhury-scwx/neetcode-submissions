class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i: nums)
        {
            mpp[i]++;
        }
        vector<int> res;
        vector<vector<int>> freq(nums.size()+1);
        for(const auto& pair: mpp)
        {
            freq[pair.second].push_back(pair.first);
        }
        for(int i=freq.size()-1;i>=0;i--)
        {
            if(freq[i].size()>0)
            {
                for(int j:freq[i])
                {
                    res.push_back(j);
                    if(res.size()>=k)
                    return res;
                }
            }
        }
        return res;
        
    }
};
