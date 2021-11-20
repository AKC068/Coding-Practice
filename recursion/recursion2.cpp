// Counting forward and backwards

#include<iostream>
using namespace std;

void count(int n){
    if(n<=0)
    return ;

    cout<<n<<" ";
    count(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"enter a no."<<endl;
    cin>>n;
    cout<<"counting are: "<<endl;
    count(n);
}