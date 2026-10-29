class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> fre(26,0);
        string str="balloon";
        for(int i=0;i<text.size();i++)
        {
            fre[text[i]-'a']++;
        }
        int cnt=0;
        while(true)
        {
            for(int i=0;i<str.size();i++)
            {
                if (fre[str[i] - 'a'] == 0)
                    return cnt;
                else
                    fre[str[i] - 'a']--;
            }
            cnt++;
        }
        return cnt;
        
    }
};