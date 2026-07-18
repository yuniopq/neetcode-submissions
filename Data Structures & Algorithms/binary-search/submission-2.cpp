class Solution {
public:
    int search(vector<int>& nums, int target) {
        int izq=0, der=nums.size()-1;
        while (der >= izq ) {
            int idx = izq + (der - izq) / 2;            
            if (nums[idx] == target)  return idx;
            if (nums[idx] > target) der = idx - 1;
            else                    izq = idx + 1; 
        }
        return -1;
    }
};
