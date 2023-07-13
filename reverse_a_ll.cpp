#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
       
        Node* next;

        Node(){
            this->data=0;
            
            this->next=NULL;
        }
        Node(int data){
            this->data=data;
            
            this->next=NULL;
        }
};

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void reverseLL(Node* &head ,Node* &tail ,int len,int l)
{
    // base
    if(len>=l)
    {
        swap(head->data,tail->data);
        return;
    }
    Node* temp=head;
    int val=temp->data;
    temp->data=tail->data;
    tail->data=val;

    int i=1;
    Node* prev=temp;
    while(prev!=tail)
    {
        prev=prev->next;
        i++;
    }
    
    
    return reverseLL(temp->next,prev,len-1,l);
    
}
int main()
{
    Node* first=new Node(4);
    Node* second=new Node(10);
    Node* third=new Node(20);
    Node* fourth=new Node(40);
    first->next=second;
    second->next=third;
    third->next=fourth;
    print(first);
    cout<<endl;
    reverseLL(first,fourth,4,4);
    print(first);
}