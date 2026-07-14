class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> res;

        for ( string s : strs){

            vector<int> freq(26,0);
            for (char c : s){
                freq[c-'a']++;
            }

            string key;
            for (int f : freq)
                key += to_string(f) + "#";
            
            m[key].push_back(s);
        }

        for (auto pair:m){
            res.push_back(pair.second);
        }

        return res;
    }
};
