class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapa;
        for (const auto& s:strs){
            string ordenado = s;
            sort(ordenado.begin(), ordenado.end());
            mapa[ordenado].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& pair : mapa)
        {
            res.push_back(pair.second);
        }
        return res;
    }
};
