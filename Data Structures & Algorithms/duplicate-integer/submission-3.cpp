class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>conj;
        for (int i : nums)
        {
            if(conj.count(i)) return true;
            conj.insert(i);
        }
        return false;
    }
};