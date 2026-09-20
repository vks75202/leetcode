class Solution {
public:
    int reverseDegree(string s) {
        vector<int> count(26,0);
        long long ans=0;
        for(int i=0;i<s.size();i++)
        {
           int index=s[i]-'a';
           index=26-index;
           ans+=index*(i+1);
        }
       
        return ans;
    }
};