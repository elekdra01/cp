#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head=NULL;
node *tail=NULL;
int main()
{int n;
cin>>n;
for(int i=0;i<n;i++)
{   int x;
    cin>>x;
    node *ptr=new node();
    ptr->data=x;
    ptr=ptr->next;
}
ptr->next=NULL;
}