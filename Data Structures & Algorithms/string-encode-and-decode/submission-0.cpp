class Solution {
public:

    string encode(vector<string>& strs) {
        string sol="";
        for (string s:strs)
            sol+=s+";";
        return sol;
    }

    vector<string> decode(string s) {
        string celda="";
        vector<string> sol;
        for(char c:s)
            if (c!=';')
                celda+=c;
            else{
                sol.push_back(celda);
                celda="";
            }
        return sol;
    }
};
