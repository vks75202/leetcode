class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=0,eve=0;
        for(int i=1;i<=n*2;i++)
        {
            if(i%2!=0)
            odd+=i;
            else
            eve+=i;
        }
        cout<<odd<<" "<<eve;
        return gcd(odd,eve);
    }
};