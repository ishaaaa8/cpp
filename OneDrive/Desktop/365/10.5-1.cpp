#include<iostream>
#include<math.h>
using namespace std;
int bit(int n){
    int c=0;
    while(n!=0){
        if(n&1){
            c++;
        }
        n=n>>1;
    }
    return c;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<a<<b<<endl;
    int ab=bit(a);
    cout<<"bit set in a :"<<ab<<endl;
    int bb=bit(b);
    
    cout<<"bit set in b :"<<bb<<endl;
    cout<<"total bit set  "<<ab+bb<<endl; 
    
    
    return 0;
}