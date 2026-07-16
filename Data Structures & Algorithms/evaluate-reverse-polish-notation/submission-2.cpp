class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> p;
        for (string s : tokens){
            if (s=="/" || s=="*" || s=="-" || s=="+"){
                int a = p.top();
                p.pop();
                int b = p.top();
                p.pop();
                p.push(operation(b,a,s));
            }else{
                p.push(stoi(s));
            }
        }
        
        
        return p.top();
    }
    int operation(int a, int b, string op){
        if (op == "+") return a + b;
        if (op == "-") return a - b;
        if (op == "*") return a * b;
        if (op == "/") return a / b;
        return 0;
    }
    
};
