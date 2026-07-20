class Solution {
public:
    int findMin(vector<int> &nums) {
        int i = 0, d = nums.size() - 1, m;
        while ( i <= d ){
            m = i + ( d - i ) / 2;
            if ( nums[m] < nums[i] )        d = m;
            else if ( nums[m] > nums[d] )   i = m + 1;
            else return nums[i];
        }
    }
};
