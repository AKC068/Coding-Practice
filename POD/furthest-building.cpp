#include <bits/stdc++.h>
using namespace std;

int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int, vector<int>, greater<int>> p;
        // int min=;
        // pair<int,int> top;
        int c=0;
        for(int i=0;i<heights.size()-1;i++){
            int d=heights[i+1]-heights[i];
            if(d>0){
                p.push(d);
                if(ladders){
                    ladders--;
                    c++;
                    // if(ladders==0 && bricks>p.top()){
                    //     ladders++;
                    //     bricks-=p.top();
                    //     p.pop();
                    // }
                }
                else if(ladders==0 && bricks>p.top()){
                    ladders++;
                    bricks-=p.top();
                    p.pop();
                }
                else if(ladders==0 && bricks>=d){
                    bricks-=d;
                    p.pop();
                    c++;
                }
                else if(ladders==0 && bricks<d){
                    break;
                }
            }else{
                c++;
            }
        }
        return c;
}
int main(){
    vector<int> h;
    h={10,1,10,2,3,4,5,6,7};
    int b=12, l=1;
    cout<<furthestBuilding(h, b, l);
    return 0;
}