#include <bits/stdc++.h>
using namespace std;

int removePalindromeSub(string s) {
        int l=s.length();
        int i=0, d=l/2;
        if(l==0){
            return 0;
        }
        while(d--){
            if(s[i]==s[l-1]){
                i++;
                l--;
            }else{
                return 2;
            }
        }
        return 1;
    }

    