class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> v(26,0);
        vector<int> up(26,0);
        int total=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                v[s[i]-'a']++;
            else
                up[s[i]-'A']++;
        }

        int ans=0;
        bool flag=false;

        for(int i=0;i<26;i++)
        {
            if(v[i]%2==0)
                ans+=v[i];
            else
            {
                ans+=v[i]-1;
                flag=true;
            }
        }

        if(flag)
            total=ans+1;
        else
            total=ans;

        int res=0;
        bool flg=false;

        for(int i=0;i<26;i++)
        {
            if(up[i]%2==0)
                res+=up[i];
            else
            {
                res+=up[i]-1;
                flg=true;
            }
        }

        if(flg && !flag)
            total+=res+1;
        else
            total+=res;

        return total;
    }
};