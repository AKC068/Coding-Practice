#include <bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int> &A) {
    stack<int> s;
    vector<int> g;

    for(int i=0;i<A.size();i++){
        while(!s.empty() && s.top()>=A[i]){
            s.pop();
        }
        if(!s.empty()){
            g.push_back(s.top());
        }else{
            g.push_back(-1);
        }
        s.push(A[i]);
    }
    return g;
}

    int main(){
        vector<int> arr;
        arr={1,3,2,4};
        
        vector<int> res=prevSmaller(arr);
        for(int i:res){
            cout<<i<<" ";
        }
        return 0;
    }