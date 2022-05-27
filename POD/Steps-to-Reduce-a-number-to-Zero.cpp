#include <bits/stdc++.h>
using namespace std;

int numberOfSteps(int num) {
        int cnt=0;
        while(num!=0){
            if(num&1==1){
                num-=1;
                cnt++;
            }else{
                num=num>>1;
                cnt++;
            }
        }
        return cnt;
}

int main(){
    int n; cin>>n;
    int ans=numberOfSteps(n);
    cout<<ans<<endl;
    return 0;
}