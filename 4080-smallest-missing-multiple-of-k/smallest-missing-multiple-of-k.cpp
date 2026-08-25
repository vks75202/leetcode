class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // if(nums.size()==1 && k==nums[0])
        // return k*2;
        int j;
        for( j=1;j<=nums.size();j++)
        {
            bool flag=false;
            for(int i=0;i<nums.size();i++){
            if(nums[i]==k*j)
            {
                flag=true;
                break;
            }
            }
            if(flag==false)
            return k*j;

        }
        if(j==nums.size())
        j++;
        return k*j;
    }
};