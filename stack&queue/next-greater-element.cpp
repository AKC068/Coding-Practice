#include <bits/stdc++.h>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> s;
        vector<long long> ans;
        for(int i=n-1;i>=0;i--){
                while(!s.empty() && s.top()<arr[i]){
                    s.pop();
                }
                if(!s.empty()){
                    ans[i]=(s.top());
                }else{
                    ans[i]=(-1);
                }
            s.push(arr[i]);
        }
        return ans;
    }

    int main(){
        vector<long long> arr;
        arr={1,3,2,4};
        int n=arr.size();
        vector<long long> res=nextLargerElement(arr, n);
        for(long long i:res){
            cout<<i<<" ";
        }
        return 0;
    }