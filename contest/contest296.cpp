#include <bits/stdc++.h>
using namespace std;

int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        int newNum[n];
        int i;
        int ans;
        for(i=0;i<n/2;i++){     //TC=O(n)-1
            if((i&1)==0){
                newNum[i]=min(nums[2 * i], nums[2 * i + 1]);
            }else{
                newNum[i]=max(nums[2 * i], nums[2 * i + 1]);
            }
            nums[i]=newNum[i];
            if((n/2)>=1){
                if(i==(n/2)-1){
                    n=n/2;
                    i=-1;
                }
            }else{
                break;
            }
        }
        ans=nums[0];
        return ans;
    }

    int main(){
        vector<int> arr;
        arr={7,3,1,2};
        int ans=minMaxGame(arr);
        cout<<ans;
    }