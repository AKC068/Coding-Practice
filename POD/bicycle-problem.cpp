#include <bits/stdc++.h>
using namespace std;

long buzzTime(long N, long M, long L, long H[], long A[])
    {
        // code here
        long sum, i=0;
        long v[i][N];
        for(i=0;sum<M;i++){
            sum=0;
            for(int j=0;j<N;j++){
                v[i][j]=H[j]+(A[j]*i);
                if(v[i][j]>=L){
                    sum+=v[i][j];
                }
            }
        }
        return (i+1);
    }

    int main(){
    
        long N=3, M=400, L=120;
        long H[]={20, 50, 20};
        long A[]={20, 70, 90};
        
        cout<<buzzTime(N, M, L, H, A)<<"\n";
    return 0;
}