class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans=INT_MAX;
        int sum=0;
        bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]==nums[j] && nums[j]==nums[k])
                    {
                        flag=true;
                        sum=abs(i-j)+abs(j-k)+abs(k-i);
                        ans=min(sum,ans);
                    }
                }
            }
        }
        if(flag)
        return ans;
        else
        return -1;
    }
};