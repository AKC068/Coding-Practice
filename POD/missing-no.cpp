#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int no=0, sum_real=0, sum_arr=0;
        int n=nums.size();
        sum_real= n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum_arr+=nums[i];
        }
        no= sum_real-sum_arr;
        return no;
}

int main(){
    vector<int> nums={0,1,2,4,5,6,7,8};
    int ans=missingNumber(nums);
    cout<<ans<<endl;
    return 0;
}