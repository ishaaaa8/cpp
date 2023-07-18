#include<iostream>
#include<stack>

using namespace std;

void findMiddle(stack<int> &s,int totalsize){
    if(s.size()==(totalsize/2)+1){
        cout<< s.top()<<endl;
        return;
    }
 
    int temp=s.top();
    s.pop();
    findMiddle(s,totalsize);
    s.push(temp);


}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(2);
    s.push(8);
    s.push(1);
    // s.push(2);
    s.push(4);
    int totalsize=s.size();
    findMiddle(s,totalsize);
}