#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int>s;
    s.push(8);
    s.push(9);
    s.push(1);
    s.push(3);

    //i/p -> 8 9 1 3
    // o/p -> 3 1 9 8 
    // elements of stack are printed in reverse order

    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}
