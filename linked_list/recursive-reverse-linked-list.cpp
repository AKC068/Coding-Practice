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

node *reverseList(node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newHead=reverseList(head->next);
    node* nextHead=head->next;
    nextHead->next=head;
    head->next=NULL;
        
    return newHead;
}

int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    node *disp=reverseList(first);
    while(disp!=NULL){
        cout<<disp->data<<" ";
        disp=disp->next;
    }
    return 0;
}