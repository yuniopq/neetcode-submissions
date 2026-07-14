class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> m;
        m[']'] = '[';
        m['}'] = '{';
        m[')'] = '(';

        stack<char> p;
        for (char c : s)
            if ( m.count(c) ){
                if (p.empty())          return false;
                if (p.top() == m[c])    p.pop();
                else return false;
            }
            else p.push(c);
            
        return p.empty();
    }
};
