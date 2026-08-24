class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> check(nums.size()+1,0);
        for(auto &i: nums) check[i]=1;
        vector<int> ans;
        for(int i=1;i<=nums.size();i++)
            if(check[i]==0) ans.emplace_back(i);
        return ans; 
    }
};