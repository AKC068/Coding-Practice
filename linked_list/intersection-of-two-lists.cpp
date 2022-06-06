#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int data;
    ListNode *next;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *firstA=headA; ListNode *firstB=headB;
        int m=leng(firstA), n=leng(firstB);
        if(m>n){
            swap(firstA, firstB);
            swap(m,n);
        }
        for(int i=1;i<=n;i++){
            if(i>n-m){
                if(firstA==firstB)
                    return firstA;
                firstA=firstA->next;
            }
            firstB=firstB->next;
        }
        return NULL;
    }

    int leng(ListNode *node){
        int cnt=0;
        while(node!=NULL){
            cnt++;
            node=node->next;
        }
        return cnt;
    }