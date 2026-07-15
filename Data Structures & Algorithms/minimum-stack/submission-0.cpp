class MinStack {
private:
    stack<int> pila;
    stack<int> minPila;
public:
    MinStack() {
    }
    
    void push(int val) {
        pila.push(val);

        minPila.push( 
            minPila.empty() ? 
            val : min(val,minPila.top()) 
        );
    }
    
    void pop() {

        pila.pop();
        minPila.pop();

    }
    
    int top() {
        return pila.top();
    }
    
    int getMin() {
        return minPila.top();
    }
};
