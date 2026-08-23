class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++)
        v[s[i]-'a']++;

        int count=0;
        for(int i=0;i<26;i++)
        {
            if(v[i]>0)
            {
                count=v[i];
                break;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(v[i]>0 && v[i]!=count)
            return false;
        }
        return true;
    }
};