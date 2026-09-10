class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int ans=nums[0];
        while(l<r)
        {
            int mid=l-(l-r)/2;
            if(nums[mid]>nums[r])
            {
                l=mid+1;
            }
            else
            r=mid;
        }
        
        return nums[l];
    }
};