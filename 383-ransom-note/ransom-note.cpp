class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size())
            return false;

        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        int index = 0;

        for (int i = 0; i < magazine.size(); i++) {
            if (index < ransomNote.size() &&
                magazine[i] == ransomNote[index]) {
                index++;
            }

            if (index == ransomNote.size())
                return true;
        }

        return false;
    }
};