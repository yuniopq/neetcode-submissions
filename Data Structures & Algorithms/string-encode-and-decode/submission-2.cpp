class Solution {
public:

    string encode(vector<string>& strs) {
        string sol="";
        int contador=0;
        for (string s:strs){
            sol+=to_string(s.size())+'#'+s;

        }
        return sol;
    }

    vector<string> decode(string s) {
        vector<string> sol;
        int i=0;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int longitud = stoi( s.substr(i,j-i) );
            i=j+1;
            j=i+longitud;
            sol.push_back( s.substr(i, longitud) );
            i=j;
        }
        return sol;
    }
};
