#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=15;i+=2){
        cout<<i<<" ";
        if(i&1){
            cout<<"hey";
            continue;
            
        }
        cout<<"hi";
        i++;
    }
    // int a=5;
    // //int a=4;
    // int b=4;
    // int b=8;
    // cout<<a<<endl;
    // cout<<b<<endl;
}
