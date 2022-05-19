#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str){
    
    // char *c_arr;
    // c_arr=&str[0];
    
    int start=0, end=(str.length())-1;
    while(start<end){
        int temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        
        start=start+1;
        end=end-1;
    }
    return str;
}

int main(){
    string str="Geeks", final_str;
    final_str=reverseWord(str);
    cout<<final_str<<endl;
}