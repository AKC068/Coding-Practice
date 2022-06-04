#include <bits/stdc++.h>
using namespace std;

// using queue to implement stack - using fifo to perform lifo
class MyStack {
    queue<int> q;
    int cnt;
public:
    MyStack() {
        cnt=0;
    }
    
    void push(int x) {
        q.push(x);
        cnt++;
        for(int i=1;i<=(cnt-1);i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        // if(q1.empty())
        //     return -1;
        int val=q.front();
        q.pop();
        cnt--;
        return val;
    }
    
    int top() {
        // if(q1.empty())
        //     return -1;
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
