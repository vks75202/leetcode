class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1)
        {
        int temp=n;
        int ans=1;
        while(temp)
        {
            int r=temp%10;
            ans*=r;
            temp/=10;
        }
        if(ans%t==0)
        return n;
        else
        n++;

        }
        
    }
};