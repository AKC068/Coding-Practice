#include <bits/stdc++.h>
using namespace std;

// using stack to implement queue - using lifo to perform fifo
class MyQueue {
    stack<int> s1,s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(s1.empty() == 0){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.empty() == 0){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int val=s1.top();
        s1.pop();
        return val;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};