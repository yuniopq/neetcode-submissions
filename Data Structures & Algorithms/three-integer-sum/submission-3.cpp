class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sol;
        sort(nums.begin(), nums.end());
        
        for (int i=0; i<nums.size()-2; i++){
            if(nums[i]>0) break;
            if(nums[i]==nums[i-1] and i!=0) continue;
            int j = i+1, k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k] == 0){
                    sol.push_back({nums[i], nums[j], nums[k]});
                    do{j++;}while(nums[j] == nums[j-1] and j<k);
                    do{k--;}while(nums[k] == nums[k+1] and j<k);
                }
                else if (nums[j]+nums[k]+nums[i]>0)
                    k--;
                else
                    j++;
            }
        }
        return sol;
    }

};
