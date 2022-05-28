#include <bits/stdc++.h>
using namespace std;

bool digitCount(string num) {
        int n;
        n=num.length();
        int cnt[n];

        for(int i=0;i<n;i++){
            num[i]=num[i]-'0';
            cnt[i]=0;
        }

        // for(int i=0;i<n;i++){
        //     int ct=0;
        //     for(int j=0;j<n;j++){
        //         if(i==num[j]){
        //             cnt[i]=++ct;
        //         }
        //     }
        // }

        for(int i=0;i<n;i++){
            cnt[num[i]]+=1;     // array mapping
        }

        for(int i=0;i<n;i++){
            if(cnt[i]==num[i]){
                continue;
            }else{
                return false;
            }
        }
        return true;
}

int main(){
    string str="1210";
    cout<<digitCount(str);
    return 0;
}