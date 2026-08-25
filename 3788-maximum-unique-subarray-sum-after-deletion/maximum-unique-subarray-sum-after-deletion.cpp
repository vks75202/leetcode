class Solution {
public:
    int maxSum(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        set<int> s;
        vector<int> v;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            s.insert(nums[i]);
            else
            v.push_back(nums[i]);

        }
        int temp=INT_MIN;
        for(int i=0;i<v.size();i++)
        {
            temp=max(temp,v[i]);
        }
        int sum=0;
        for(int x:s)
        sum+=x;
        if(s.empty())
        return temp;

        return max(sum,temp);
    }
};