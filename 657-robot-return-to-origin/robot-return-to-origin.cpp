class Solution {
public:
    bool judgeCircle(string moves) {
        int up=0,dn=0,lf=0,rg=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
            up++;
            else if(moves[i]=='D')
            dn++;
             else if(moves[i]=='L')
            lf++;
             else
            rg++;
        }
        if(up==dn && lf==rg)
        return true;
        else
        return false;
    }
};