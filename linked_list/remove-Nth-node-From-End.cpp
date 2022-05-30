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
        node *d, *fast, *slow;
        int cnt=0;
        d=new node;
        d->next=head;
        fast=d; slow=d;
        
        while(fast->next != NULL){
            cnt++;
            if(cnt>n){        //TC= O(n), SC=O(1)
                slow=slow->next;
            }
            fast=fast->next;
        }
        // if(cnt==n){
        //     node *first=d->next;
        //     d->next=d->next->next;
        //     delete(first);
        //     return d->next;
        // }
        // node *act;       //TC= O(2n), SC=O(1)
        // act=head;
        // for(int i=1;i<cnt-n;i++){
        //     act=act->next;
        // }
        node *target=slow->next;
        slow->next=slow->next->next;
        delete(target);
        return d->next;
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