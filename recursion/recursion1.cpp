// factorial of a no.

#include<iostream>
using namespace std;

int fact(int n){
    if(n<=0)
    return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    cout<<"enter a no."<<endl;
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<fact(n);
}