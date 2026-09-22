class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26,0);
        int index=-1;
    
        for(int i=0;i<s.size();i++)
        {
            count[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(count[s[i]-'a']==1)
            {
                return i;
            }
        }
        return index;

    } 
};