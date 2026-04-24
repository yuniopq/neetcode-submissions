class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapa;
        
        for (const auto& s:strs){
            array<int,26> contador={0};
            for (const auto& c:s){
                contador[c-'a']++;
            }
            string str_contador;
            for (int i = 0; i< 26; i++){
                str_contador+=to_string(contador[i]) + ",";
            }
            mapa[str_contador].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& pair : mapa)
        {
            res.push_back(pair.second);
        }
        return res;
    }
};
