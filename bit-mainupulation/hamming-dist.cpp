#include <bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y) {
        int cnt=0, exor=0;
        exor= x^y;
        while(exor!=0){
            if((exor&1)!=0){
                cnt++;
            }
            exor=exor>>1;
        }
        return cnt;
    }

int main() {
    int n1,n2;
    cin>>n1; cin>>n2;
    cout<<hammingDistance(n1, n2);
    return 0;
}