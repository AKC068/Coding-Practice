#include <bits/stdc++.h>
using namespace std;

// using stack to implement queue - using lifo to perform fifo
class MyQueue {
    stack<int> input, output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int val;
        if(output.empty()==0){
            val=output.top();
            output.pop();
            return val;
        }else{
            while(input.empty() == 0){
                output.push(input.top());
                input.pop();
            }
            val=output.top();
            output.pop();
            return val;
        }
    }
    
    int peek() {
        if(output.empty()==0){
            return output.top();
        }else{
            while(input.empty() == 0){
                output.push(input.top());
                input.pop();
            }
            return output.top();
        }
    }
    
    bool empty() {
        return (output.empty() && input.empty());
    }
};
