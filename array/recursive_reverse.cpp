#include <bits/stdc++.h>
using namespace std;

int *reverse(int arr[], int n){     // (*reverse) coz we're returning pointer
    int *pr=new int[n];
    for(int i=0; i<n; i++){
        // reverse(arr,i);     // using recursion to get reversed array by first calling that function
        pr[n-i-1]=arr[i];     // (as array also behaves like a pointer)
        // and we are storing that reversed array in pointer 'pr'.
    }
    return pr;      // returing address of the pointer 'pr'
}

int main(){
    int arr[]={1,2,3,4,5}, n=5, *pr;
    pr=reverse(arr, n);     // here a pointer addreses are stored in another pointer
    for(int i=0; i<n; i++){
        cout<<pr[i]<<" ";
    }
}