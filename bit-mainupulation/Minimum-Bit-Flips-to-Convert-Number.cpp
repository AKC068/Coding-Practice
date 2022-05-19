//  Minimum Bit Flips to Convert Number

#include <bits/stdc++.h>
using namespace std;

    int minBitFlips(int start, int goal) {
        int a=0, cnt=0;
        a = start^goal;
        while(a!=0){
            if((a&1)!=0){
                cnt++;
            }
            a=a>>1;
        }
        return cnt;
    }

int main(){
    int start=0; cin>>start;
    int goal=0; cin>>goal;
    
    cout<<endl<<minBitFlips(start, goal);
    
    return 0;
} 