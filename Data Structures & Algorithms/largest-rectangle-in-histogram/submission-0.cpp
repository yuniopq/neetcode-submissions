class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        stack<pair<int,int>> p;
        int maxA=0;
        for (int i=0; i<heights.size(); i++){
            if (p.empty() || p.top().second <= heights[i])
                p.push({i,heights[i]});
            else{
                int lastPos;
                while(!p.empty() && p.top().second > heights[i]){
                    maxA = max(maxA, (i - p.top().first) * p.top().second);
                    lastPos = p.top().first;
                    p.pop();
                }
                p.push({lastPos, heights[i]});
            }
        }
        return maxA;
    }
};
