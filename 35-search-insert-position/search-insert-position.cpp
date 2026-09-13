class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r)
        {
            int mid=r-(r-l)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<target)
            {
            l=mid+1;
            ans=mid+1;
            }
            else
            {
            r=mid-1;
            ans=mid;
            }
        }
        return ans;
    }
};