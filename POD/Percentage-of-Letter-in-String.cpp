#include <bits/stdc++.h>
using namespace std;

int percentageLetter(string s, char letter) {
        int percent_n=0, cnt=0, n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==letter){
                cnt++;
            }
        }
        percent_n= (cnt*100)/n;
        
        return round(percent_n);
}

int main() {
    string str; cin>>str;
    char c; cin>>c;
    int percent=percentageLetter(str, c);
    cout<<percent<<endl;

    return 0;
}