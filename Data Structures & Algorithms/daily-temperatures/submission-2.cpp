class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> res(temperatures.size(),0);
        stack<int> p;
        for (int i = 0; i < temperatures.size(); i++){
            
            while(!p.empty() && temperatures[p.top()] < temperatures[i] ){
                res[p.top()] = i-p.top();
                p.pop();
            }
            p.push(i);
        }

        return res;
    }
};
