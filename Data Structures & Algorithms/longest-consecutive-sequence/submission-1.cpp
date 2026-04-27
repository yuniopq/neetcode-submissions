class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int actual=1, mayor=1;
        sort(nums.begin(),nums.end());
        for (int i=1; i<nums.size(); i++){
            if(nums[i]-nums[i-1]<1) continue;
            if(nums[i]-nums[i-1]==1)
                actual++;
            else if(actual>mayor){
                mayor=actual;
                actual=1;
            }else
                actual=1;
        }
        if(actual>mayor){
            mayor=actual;
        }
        return mayor;
    }
};
