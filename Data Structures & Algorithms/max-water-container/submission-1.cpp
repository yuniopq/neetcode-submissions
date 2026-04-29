class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mA=0;
        int i=0;
        int j=heights.size()-1;
        while ( i<j){
            int currA = (j-i)*min(heights[i],heights[j]);
            if (currA>mA){
                mA=currA;
            }
            if (heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return mA;
    }
};
