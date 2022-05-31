#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
}; 

node *first = NULL;
void create1(int A[],int n)
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

node *second = NULL;
void create2(int B[],int n)
{
    int i;
    node *t,*last;
    second=new node;
    second->data=B[0];
    second->next=NULL;
    last=second;
    
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

node* addTwoNumbers(node* l1, node* l2) {
        node *res, *dd, *link;
        res=new node;
        link=res;
        int sum, carry=0;
        while(l1!=NULL || l2!=NULL || carry>0){
            sum=0;
            if(l1!=NULL){
                sum+=l1->data;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->data;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            dd=new node;
            dd->data=sum%10;
            link->next=dd;
            link=link->next;
        }
        return res->next;
    }

int main()
{
    int A[]={4,5,5};
    int B[]={6,4,5,9};
    create1(A,3);
    create2(B,4);

    node *disp=addTwoNumbers(first, second);
    while(disp!=NULL){
        cout<<disp->data<<" ";
        disp=disp->next;
    }
    return 0;
}