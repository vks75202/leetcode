class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> count(26,0);
        for(char c:s)
        {
            count[c-'a']++;

            if(count[c-'a']==2)
            return c;
        }
        return 0;
    }
};