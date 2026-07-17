class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int, int> m;
        for (int i = 0; i < position.size(); i++){
            m[position[i]] = speed[i];
        }

        stack<double> p;
        for (auto [pos,spd] : m){
            p.push((target - pos )*1.0 / spd);
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
