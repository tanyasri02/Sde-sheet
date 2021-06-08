#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(struct Node* a, struct Node* b);

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

/* Driver program to test above function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

Node* sortedMerge(Node* l1, Node* l2)  
{  
    // code here
       if(l1==NULL)
            return l2;
        else if(l2==NULL)
            return l1;
        
        Node *head,*tail;
        
        if(l1->data<=l2->data)
        {
            head=l1;
            tail=head;
            
            l1=l1->next;
        }
        else
        {
            head=l2;
            tail=head;
            
            l2=l2->next;
        }
        
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->data<=l2->data)
            {
                tail->next=l1;
                tail=l1;
                
                l1=l1->next;
            }
            else
            {
                tail->next=l2;
                tail=l2;
                
                l2=l2->next;
            }
        }
        if(l1==NULL)
            tail->next=l2;
        else
            tail->next=l1;
        return head;
    
}  