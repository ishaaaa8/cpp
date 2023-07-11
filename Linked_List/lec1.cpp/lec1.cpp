#include<bits/stdc++.h>
using namespace std;

// create a ll
class Node
{
    public:
        int data;
        Node* next;
        Node()
        {
            this->data=0;
            this->next=NULL;
        }   
        Node(int data)
        {
            this->data=data;
            this->next=NULL;
        }
};

// printing
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtHead(Node* &head, Node* &tail, int data)
{
    Node* newNode= new Node(data);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}

void insertAtTail(Node* &head, Node* &tail, int data)
{
    Node* newNode= new Node(data);
    if(tail==NULL)
    {
        tail=newNode;
        head=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

int findLength(Node* &head)
{
    Node* temp=head;
    int i=0;
    while(temp!=NULL)
    {
        i++;
        temp=temp->next;
    }
    return i;
}
void insertAtPosition(Node* &head, Node* &tail, int position,int data)
{
    if(position==0)
    {
        insertAtHead(head,tail,data);
    }
    int len=findLength(head);
    if(position>=len)
    {
        insertAtTail(head,tail,data);
    }
    //step1
    Node* newNode=new Node(data);
    //step2
    Node* temp=head;
    int i=1;
    while(i<position-1)  //do not use -1 for zero based indexin
    {
        temp=temp->next;
        i++;
    }
    // step3
    Node* prev=temp;
    Node* curr=temp->next;
    //step4
    newNode->next=curr;
    prev->next=newNode;

}

int main()
{
    Node* first=new Node(8);
    Node* second=new Node(10);
    Node* third=new Node(4);
    first->next=second;
    second->next=third;
    print(first);//call fn to print ll
    // insert at head
    Node* head=first; //head is used to denote starting Node of LL
    Node* tail=third;
    cout<<endl;
    insertAtHead(head,third,404); 
    print(head);//head is now pointing to ele before node "first"
    cout<<endl;
    
    cout<<endl;

    // Node* head=NULL;
    // Node* tail=NULL;
    // inserting at tail
    insertAtTail(head,tail,505);
    print(head);
    
// insert at any pos
    
    cout<<"any pos"<<endl;
    insertAtPosition(head,tail,5,111);
    print(head);
    
    return 0;
}