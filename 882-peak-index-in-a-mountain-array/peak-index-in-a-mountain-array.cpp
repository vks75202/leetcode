class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<r)
        {
            int mid=l-(l-r)/2;
            if(nums[mid]<nums[mid+1] && mid+1<=nums.size()-1)
            {
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return l;
    }
};