class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int& it: nums)
        {
            st.insert(it);
        }
        int count=1;
        int max_count=0;
        for(int it: st)
        {
            if(st.find(it-1)!=st.end())
            continue;
            else
            {
                count=1;
                int x=it;
                while(st.find(x+1)!=st.end())
                {
                    x++;
                    count++;
                }
                max_count=max(max_count,count);
            }
        }
        return max_count;
        
    }
};
