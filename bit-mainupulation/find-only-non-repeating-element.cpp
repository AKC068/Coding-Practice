// Find the only non-repeating element in an array where every other element repeats twice.

#include <bits/stdc++.h>
using namespace std;

int find(int arr[], int n){
    int ans=0;
    for(int i = 0; i < n; i++){
        ans=(arr[i])^ans;
    }
    return ans;
}
int main(){
    int n=0; cin>>n;
    int array[n];
    for(int i = 0; i <n; i++){
        cin>>array[i];
    }
    cout<<endl<<find(array, n);
    
    return 0;
}  