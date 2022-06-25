#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="l|*e*et|c**o|*de|";

    int bar=0,star=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|'){
                bar++;
            }
            if(s[i]=='*' && (bar&1)==0){
                star++;
            }
        }
    cout<<star<<" "<<bar;
    return 0;
}