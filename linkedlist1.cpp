#include <iostream>
using namespace std;
class Node {
public:
   int data;
   Node *next;
};
Node* head = NULL;
void insert(int new_data) {
   Node* new_node = new Node();
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void insertend(int new_data) {
   Node* new_node = new Node();
   Node* ptr=head;
   while (ptr->next!=NULL)
   {
        ptr=ptr->next;/* code */
   }
   ptr->next=new_node;
   new_node->data = new_data;
   new_node->next = NULL;
}
void insertindex(int ndata,int index)
{
   Node* newnode=new Node();
   newnode->data=ndata;
   Node* ptr=head;
   int c=0;
   while(c!=index)
   {
      ptr=ptr->next;
      c++;
      //cout<<c<<endl;
   }
   //cout<<ptr->data<<endl;
   newnode->next=ptr->next;
   ptr->next=newnode;

}
void display() {
Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       insert(x);
   }
   cout<<"The linked list is: ";
   display();
   insertend(6);
   cout<<"The linked list is: ";
   display();
   cout<<endl;
   insertindex(10,2);
   display();
   return 0;
}