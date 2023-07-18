#include<iostream>

using namespace std;

// CREATING STACK USING ARRAY
class stack{
    public:
    int* arr;
    int size;
    int top;

    stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }

    void push(int data){
        if(size - top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Overflow"<<endl;
        }
        
    }
    void pop(){
        if(top == -1)
        {
            cout<<"underflow"<<endl;
        }else{
            top--;
        }
        
    }
    void Top(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
        }
        else{
            cout<<arr[top]<<endl;
        }

    }
    void empty(){
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl;
        } 
        else{
            cout<<"Stack is not empty"<<endl;
        }

    }
};
int main()
{
    stack s(8);
    s.push(8);
    s.push(10);
    s.push(4);
    s.push(2);
    s.Top();
    s.pop();
    s.push(1);
    s.push(5);
    s.empty();
    
    return 0;
}
