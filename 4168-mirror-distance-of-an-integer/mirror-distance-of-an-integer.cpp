class Solution {
public:
    int mirrorDistance(int n) {
        int temp=n;
        int num=0;
        while(temp)
        {
            int r=temp%10;
            num=num*10+r;
            temp/=10;
        }
        return abs(n-num);
    }
};