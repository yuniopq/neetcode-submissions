class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for (int i=0; i<nums.size()-1; i++)
        {
            int diff = target - nums[i];
            if (m.find(diff) != m.end())
                return {m[diff],i};
            m[nums[i]] = i;  
        }
    }
};
