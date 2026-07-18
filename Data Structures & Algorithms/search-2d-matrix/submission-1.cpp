class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int numF = matrix.size(), numC = matrix[0].size();
        int l = 0, r = numF * numC - 1;
        while ( l <=  r){
            int idx = l + (r - l) / 2;
            int f = idx / numC;
            int c = idx % numC;
            if (matrix[f][c] == target) return true;
            if (matrix[f][c] >  target) r = idx - 1;
            else                        l = idx + 1;
        }
        return false;
    }
};
