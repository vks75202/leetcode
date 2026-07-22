class Solution {
public:
    double average(vector<int>& sal) {
        sort(sal.begin(),sal.end());
        int sm=0;
        for(int i=1;i<sal.size()-1;i++)
        {
            sm+=sal[i];
        }
        int cnt=sal.size()-2;
        double avg= double(sm)/cnt;
        return avg;
    }
};