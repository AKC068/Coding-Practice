#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
}; 

node *first = NULL;
void create(int A[],int n)
{
    int i;
    node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

node* removeNthFromEnd(node* head, int n) {
        node *fast, *slow;
        int cnt=0;
        fast=head; slow=head;
        
        while(fast!=NULL){
            cnt++;
            if(cnt>n+1){        //TC= O(n), SC=O(1)
                slow=slow->next;
            }
            fast=fast->next;
        }
        if(cnt==n){
            node *first=head;
            head=head->next;
            delete(first);
            return head;
        }
        // node *act;       //TC= O(2n), SC=O(1)
        // act=head;
        // for(int i=1;i<cnt-n;i++){
        //     act=act->next;
        // }
        node *target=slow->next;
        slow->next=slow->next->next;
        delete(target);
        return head;
    }

int main()
{
    int A[]={1,2,3,4,5,6};
    int n=6;
    create(A,6);

    node *disp=removeNthFromEnd(first, n);
    while(disp!=NULL){
        cout<<disp->data<<" ";
        disp=disp->next;
    }
    return 0;
}