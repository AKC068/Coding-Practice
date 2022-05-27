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

node* mergeTwoLists(node* list1, node* list2) {
        
        node *reqd, *link, *dd;
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
            reqd=new node;
        
            if(list1->data > list2->data){
                node* temp=list1;
                list1=list2;
                list2=temp;
            }
            reqd->data=list1->data;
            link=reqd;
        
            list1=list1->next;
            while(list1!=NULL && list2!=NULL){
                if(list1->data <= list2->data){
                    dd=new node;
                    dd->data=list1->data;
                    link->next=dd;
                    link=dd;
                    list1=list1->next;
                }else{
                    dd=new node;
                    dd->data=list2->data;
                    link->next=dd;
                    link=dd;
                    list2=list2->next;
                }
            }
            if(list1==NULL){
                link->next=list2;
            }
            if(list2==NULL){
                link->next=list1;
            }    
        return reqd;
    }

int main()
{
    int A[]={1,3,5};
    int B[]={2,4,6,7};
    create1(A,3);
    create2(B,4);

    node *disp=mergeTwoLists(first, second);
    while(disp!=NULL){
        cout<<disp->data<<" ";
        disp=disp->next;
    }
    return 0;
}