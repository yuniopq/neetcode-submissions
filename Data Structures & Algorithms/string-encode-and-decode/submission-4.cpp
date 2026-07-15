class Solution {
public:

    string encode(vector<string>& strs) {
        string enc;
        for (string s:strs)
        {
            enc+=to_string(s.size())+"#"+s;
        }
        return enc;
    }

    vector<string> decode(string s) {
        string tmp;
        vector<string> dec;
        for (int i = 0; i < s.size(); i++){
            char c = s[i];
            if (c!='#') tmp += c;
            else{
                int cant = stoi(tmp);
                tmp="";
                int j;
                for ( j = i+1; j < i+1+cant; j++){
                    tmp+=s[j];
                }
                i = j;
                dec.push_back(tmp);
                tmp=s[j];
            }
        }
        return dec;
    }
};
