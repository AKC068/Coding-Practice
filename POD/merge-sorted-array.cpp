#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        int t=m+n;
        int newnum[t];
        
        while(i<m && j<n) {
            if(nums1[i]<=nums2[j]){
                newnum[k]=nums1[i];
                i++;
            }else{
                newnum[k]=nums2[j];
                j++;
            }
            k++;
        }
        while(i<m) {
            newnum[k]=nums1[i];
            i++;
            k++;
        }
        while(j<n) {
            newnum[k]=nums2[j];
            j++;
            k++;
        }
        for(int i=0;i<t;i++){
            nums1[i]=newnum[i];
        }
    }

    int main(){
        int m=3, n=3;
        vector<int> nums1={1,2,3,0,0,0}; 
        vector<int> nums2={2,3,4};
        
        merge(nums1, m, nums2, n);
        for(int i=0;i<n+m; i++){
            cout<<nums1[i]<<" ";
        }
        return 0;
    }