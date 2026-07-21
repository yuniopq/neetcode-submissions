class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, d = nums.size()-1, m;
        while ( i <= d ){
            m = i + ( d - i ) / 2;
            if (nums[m] == target)  return m;
            else if (nums[m] >= nums[i]){
                if ( nums[i] <= target && target < nums[m] )
                    d = m - 1;
                else 
                    i = m + 1;
            } 
            else{
                if (nums[m] < target && target <= nums[d] )
                    i = m + 1;
                else 
                    d = m - 1;
            } 
        }
        
        return -1;
    }
};
