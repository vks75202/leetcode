class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        long long prod=1;
        while(temp)
        {
            int r=temp%10;
            sum+=r;
            prod=prod*r;
            temp/=10;
        }
        cout<<sum<<" "<<prod;
        sum=sum+prod;
        if(n%sum)
        return false;
        else 
        return true;
    }
};