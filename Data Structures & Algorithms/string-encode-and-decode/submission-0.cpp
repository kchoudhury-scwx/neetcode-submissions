class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string &str: strs)
        {
            int length = str.length();
            res += to_string(length) + "#" + str; 
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.length())
        {
            int j=i;
            string length_str = "";
            while(s[j]!='#')
            {
                length_str+=s[j];
                j++;
            }
            int length = stoi(length_str);
            string str = s.substr(j+1,length);
            res.push_back(str);
            i=j+1+length;
        }
        return res;
    }
};
