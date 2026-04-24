class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        
        int contador[26]={0};
        
        for(int i=0; i<s.size(); i++)
        {
            contador[s[i]-'a']++;
            contador[t[i]-'a']--;
        }
        
        for(int i:contador) 
            if(i!=0) return false;

        return true;
    }
};
