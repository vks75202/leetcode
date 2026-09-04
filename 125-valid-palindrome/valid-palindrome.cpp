class Solution {
public:
    bool isPalindrome(string s) {
        
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            str+=s[i];
        }
        transform(str.begin(),str.end(),str.begin(),::tolower);
        int st=0;
        int end=str.size()-1;
        while(st<=end)
        {
            if(str[st]==str[end]){
                st++;
                end--;
            }
            else
            return false;
        }
        return true;
    }
};