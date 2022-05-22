// Find the two non-repeating elements in an array of repeating elements/ Unique Numbers 2

#include <bits/stdc++.h>
using namespace std;

void find(int arr[], int n, int *x, int *y){
    int set_bit=0, exor=0;
    *x=0, *y=0;
    for(int i = 0; i < n; i++){
        exor=(arr[i])^exor;
    }
    set_bit= exor & ~(exor-1);  // to find the rigth most se bit of the no.
    for(int i = 0; i < n; i++){
        if(arr[i] & set_bit){  // to sort no.s in two different groups among given array
            *x=*x^arr[i];
        }else{
            *y=*y^arr[i];
        }
    }
}
int main(){
    int n=0; cin>>n;
    int array[n];
    int *x=new int[(sizeof(int))];
    int *y=new int[(sizeof(int))];
    for(int i = 0; i <n; i++){
        cin>>array[i];
    }
    find(array, n, x, y);
    cout<<endl<<*x<<" "<<*y;
    return 0;
}  