// Counting forward and backwards

#include<iostream>
using namespace std;

void count(int n){
    if(n<=0)
    return ;

    count(n-1);
    cout<<n<<" ";
    return ;
}
int main(){
    int n;
    cout<<"enter a no."<<endl;
    cin>>n;
    cout<<"counting are: "<<endl;
    count(n);
}