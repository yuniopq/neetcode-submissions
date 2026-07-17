class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        for (int i = 0; i < position.size(); i++){
            v.push_back({position[i],speed[i]});
        }
        std::sort(v.begin(),v.end());
        stack<double> p;
        for (auto par : v){
            p.push((target - par.first )*1.0 / par.second);
        }

        int nFleet=0;
        while(!p.empty()){
            nFleet++;
            double tmp = p.top();
            p.pop();
            
            while(!p.empty() && p.top() <= tmp){
                p.pop();
            }
        }

        return nFleet;
    }
};
