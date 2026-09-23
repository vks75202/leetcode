class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();

        int total = 0;
        for(int x : nums)
            total += x;

        int target = total - k;

        if(target < 0)
            return -1;

        if(target == 0)
            return n;

        int l = 0;
        int sum = 0;
        int longest = -1;

        for(int r = 0; r < n; r++)
        {
            sum += nums[r];

            while(sum > target)
            {
                sum -= nums[l];
                l++;
            }

            if(sum == target)
                longest = max(longest, r - l + 1);
        }

        if(longest == -1)
            return -1;

        return n - longest;
    }
};