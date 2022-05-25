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

    node* middleNode(node* head) {
        int cnt=0;
        node *mid=head;
        
        while(head!=NULL){
            cnt++;
            head=head->next;
        }
        
        
        for(int i=1;i<=cnt/2;i++){
            mid=mid->next;
        }
        
        return mid;
    }


int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    node *disp=middleNode(first);
    while(disp!=NULL){
        cout<<disp->data<<" ";
        disp=disp->next;
    }
    return 0;
}