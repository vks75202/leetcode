class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int f=0;
        int l=numbers.size()-1;
        while(f<l)
        {
            if(numbers[f]+numbers[l]==target)
            break;
            else if(numbers[f]+numbers[l]>target)
            l--;
            else
            f++;
        }
        f++;
        l++;
        v.push_back(f);
        v.push_back(l);
        return v;
    }
};