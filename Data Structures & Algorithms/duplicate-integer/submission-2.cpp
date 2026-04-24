class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,bool>mapa;
        for (int i = 0; i < nums.size(); i++)
        {
            if(mapa[nums[i]]) return true;
            mapa[nums[i]]=true;
        }
        return false;
    }
};