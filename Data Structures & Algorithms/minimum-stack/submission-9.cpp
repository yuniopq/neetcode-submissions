class MinStack {
private:
    stack<long> pila;
    long min;
public:
    MinStack() {
    }
    
    void push(int val) {
        if (pila.empty()){
            pila.push(0);
            min = (long)val;
        } else{
            pila.push( (long)val-min);
            if ( (long)val < min)
                min = (long)val;
        }
    }
    
    void pop() {
        if (pila.empty())   return;
        long val = pila.top();
        pila.pop();
        if (val < 0){
            min -= val;
        }
    }
    
    int top() {
        return pila.top()<0? min : pila.top() + min;
    }
    
    int getMin() {
        return (int)min;
    }
};
