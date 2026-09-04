class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mx=INT_MIN;
        int mn=INT_MAX;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
               mx = *max_element(nums.begin(), nums.begin() + j);
                mn = *min_element(nums.begin() + j, nums.end());
                ans=mx-mn;
                if(ans<=k)
                return j;
            }
        }
        return -1;
    }
};