class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1==s2)
        return true;

        int i=0,j=2; 
        swap(s1[i],s1[j]);
        if(s1==s2)
        return true;
        swap(s1[i],s1[j]);

         i=1,j=3; 
        swap(s1[i],s1[j]);
        if(s1==s2)
        return true;
        swap(s1[i],s1[j]);

         i=0,j=2; 
        swap(s1[i],s1[j]);
        i=1,j=3;
        swap(s1[i],s1[j]);
        if(s1==s2)
        return true;

        return false;
    }
};