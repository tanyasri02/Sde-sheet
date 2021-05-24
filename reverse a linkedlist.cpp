#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define test() int t;cin>>t;while(t--)
struct Node{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* current=head;
        Node* ptr=NULL;
        
        while(current!=NULL)
        {
            Node* temp=current->next;
            current->next=ptr;
            ptr=current;
            current=temp;
        }
        return ptr;
    }
    
};
void printLinkedList(struct Node *head)
{
    struct Node*ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main() {
   test()
   {
       struct Node *head=NULL,*tail=NULL;
       
       int n;cin>>n;
       
       int firstData;
       cin>>firstData;
       
       head=new Node(firstData);
       
       tail=head;
       
       for(int i=1;i<n;i++)
       {
           ll x;
           cin>>x;
           tail->next=new Node(x);
           tail=tail->next;
       }
       
       Solution ob;
       head=ob.reverseList(head);
       
       printLinkedList(head);
   }
   return 0;
}