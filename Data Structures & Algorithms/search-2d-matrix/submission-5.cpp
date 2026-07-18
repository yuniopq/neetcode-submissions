class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0, bot = matrix.size() - 1, fil=-1;
        int l, r;
        while(top <= bot){
            int idx = top + (bot - top) / 2;
            if (matrix[idx][0] <= target and matrix[idx][matrix[idx].size() - 1] >= target){
                fil = idx;
                break;
            }
            else if (matrix[idx][0] > target)   bot = idx - 1;
            else                                top = idx + 1;
        }
        if (fil == -1)  return false;
        l = 0;
        r = matrix[fil].size() - 1;
        while (l <= r){
            int idx = l + (r - l) / 2;
            if (matrix[fil][idx] == target) return true;
            if (matrix[fil][idx] >  target) r = idx - 1;
            else                            l = idx + 1;
        }
        return false;
    }
};
