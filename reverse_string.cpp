#include<iostream>
#include<stack>

using namespace std;

int main()
{
    string str="isha";
    stack<char>s;
    int i=0;
    while(i!=str.size()){
        s.push(str[i]);
        i++;
    }

    //i/p -> 8 9 1 3
    // o/p -> 3 1 9 8 
    // elements of stack are printed in reverse order

    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}
