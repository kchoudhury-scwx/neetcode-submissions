class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> mpp;
        //map<char,int> hash;
        for(string& s:strs)
        {
            map<char,int> hash;
            for(char c:s)
            {
                hash[c]++;
            }
            mpp[hash].push_back(s);
        }
        vector<vector<string>> res;
        for (const auto& p : mpp) {
        res.push_back(p.second);
        }
        return res;
    }
};
