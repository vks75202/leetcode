class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        int sz=nums.size()-1;
        long long res=0;
            while(k-- && sz>-1)
            {
                if(mul>1)
                {
                res+=1LL*(1LL*mul*1LL*nums[sz]);
                }
               else 
               res+=nums[sz];
                mul--;
                sz--;

          }
        return res;
    }
};