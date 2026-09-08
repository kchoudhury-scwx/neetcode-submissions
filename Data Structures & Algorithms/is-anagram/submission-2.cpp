class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mpp;
        for(char ch: s)
        {
            mpp[ch]++;
        }
        for(char ch:t)
        {
            if(mpp.find(ch)!=mpp.end())
            mpp[ch]--;
            else
            return false;
        }
        for(auto el:mpp)
        {
            if(el.second!=0)
            return false;
        }
        return true;
    }
};
