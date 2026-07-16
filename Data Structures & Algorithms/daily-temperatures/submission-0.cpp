class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // BRUTEFORCE

        vector<int> res;

        for (int i = 0; i < temperatures.size()-1; i++){
            for (int j = i; j < temperatures.size(); j++){
                if (temperatures[i] < temperatures[j]){
                    res.push_back(j-i);
                    break;
                }
            }
            if (res.size()<=i)
                res.push_back(0);
        }
        res.push_back(0);
        return res;
    }
};
