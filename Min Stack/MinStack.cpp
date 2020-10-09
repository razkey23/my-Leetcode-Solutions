class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
       stack<int> oStack; 
       stack<int> minStack;
    }
    
    void push(int item) {
            oStack.push(item);
            if(minStack.empty()) minStack.push(item);               
            else if(item <= minStack.top()) minStack.push(item);
    }       
    
    void pop() {
        if(!oStack.empty() && !oStack.empty() ) {
            if( minStack.top() == oStack.top())  minStack.pop();
        }
      
      //Also pop original stack

      if(!oStack.empty()){
            oStack.pop(); 
      }         
    }
    
    int top() {     

      if(!oStack.empty()){
            return oStack.top();
      }

      return NULL;
     }
    
    int getMin() {
      if(!minStack.empty()) return minStack.top();
      return NULL;
    }
 private:
    stack<int> oStack;//first stack
    stack<int> minStack;//min stack
};