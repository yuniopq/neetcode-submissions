class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a,i1,i2;
        unordered_map<int,int> mapa;

        for(int i = 0; i < nums.size(); i++)
        {
            a = target-nums[i];
            if (mapa.find(a) != mapa.end())
                return{mapa[a], i};
            mapa[nums[i]] = i;
        }

        return {};
    }
};
