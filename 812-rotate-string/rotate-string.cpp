class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
        return false;
        for(int i=0;i<s.size();i++)
        {
            char last=s[s.size()-1];
            for(int i=s.size()-2;i>=0;i--)
            {
                s[i+1]=s[i];
            }
            s[0]=last;
          
            if(s==goal)
            return true;
        }
        return false;
    }
};