
#include<bits/stdc++.h>
using namespace std;

vector<int> farNumber(int N,vector<int> Arr){
        //code here
        vector<int> pos;
        int i=0, l=0, r=N;
        
        for(l=0; l<r; l++){
            for(i=r-1; i>=l; i--){
            if(l==i){
                pos.push_back(-1);
            }else if(Arr[l]>Arr[i]){
                pos.push_back(i);
                break;
            }else{
                continue;
            }
        }
        }
        return pos;
}

int main(){
    int N; cin>>N;
    vector<int> arr(N);

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    vector<int> pos=farNumber(N, arr);
    for(auto i:pos){
        cout<<i<<" ";
    }
}