#include <bits/stdc++.h>
using namespace std;

class MyStack {
    
    // int cnt;
public:
    MyStack() {
       // cnt=0;
    }
    queue<int> q1,q2;
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());   //fifo
            q1.pop();
        }
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }
    
    int pop() {
        // if(q1.empty())
        //     return -1;
        int val=q1.front();
        q1.pop();
        return val;
    }
    
    int top() {
        // if(q1.empty())
        //     return -1;
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};