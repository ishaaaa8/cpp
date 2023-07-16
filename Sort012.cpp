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
    cout<<endl;
}

void sort012(Node* &head)
{
    Node* zeroHead=new Node(-1);
    Node* zeroTail=zeroHead;

    Node* oneHead=new Node(-1);
    Node* oneTail=oneHead;

    Node* twoHead=new Node(-1);
    Node* twoTail=twoHead;

    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            Node* zero=temp;
            temp=temp->next;
            zeroTail->next=zero;
            zero->next=NULL;
        }
        else if(temp->data==1)
        {
            Node* one=temp;
            temp=temp->next;
            oneTail->next=one;
            one->next=NULL;
        }
        else if(temp->data==2)
        {
            Node* two=temp;
            temp=temp->next;
            twoTail->next=two;
            two->next=NULL;
        }



    }

    Node* temp=oneHead;
    oneHead=oneHead->next;
    temp->next=NULL;
    delete temp;

    Node* temp=twoHead;
    twoHead=twoHead->next;
    temp->next=NULL;
    delete temp;




     if(oneHead!=NULL)
        {
            zeroTail->next=oneHead;
            if(twoHead!=NULL)
            {
                oneTail->next=twoHead;
            }
        }
        else{
            if(twoHead!=NULL)
            {
                zeroTail->next=twoHead;
            }
            
        }

    Node* temp=zeroHead;
    zeroHead=zeroHead->next;
    temp->next=NULL;
    delete temp;


}

int main()
{
    Node* head = new Node(2);
    Node* second = new Node(1);
    Node* third = new Node(1);
    Node* fourth = new Node(0);
    Node* fifth = new Node(0);
    Node* sixth = new Node(2);
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;


    print(head);
    Node* newHead=sort012(head);
    print(newHead);



}