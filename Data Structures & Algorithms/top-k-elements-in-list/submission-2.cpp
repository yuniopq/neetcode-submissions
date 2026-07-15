class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> num_freq;
        for (int n : nums)
            num_freq[n]++;
        
        vector<vector<int>> freq_nums(nums.size()+1);
        for (auto [num, freq]:num_freq)
            freq_nums[freq].push_back(num);
        
        vector<int> res;
        int currK=0;

        for (int i = freq_nums.size()-1; i >= 0 && currK < k; i--){
            for (int j= 0; j<freq_nums[i].size() && currK < k; j++){
                currK++;
                res.push_back(freq_nums[i][j]);
            }
        }
        return res;
        
    }
};
