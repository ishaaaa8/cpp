#include<bits/stdc++.h>
using namespace std;
void print(string& s,int& i,int& n)
{
    if(i>n){
        return;
    }
    swap(s[i],s[n]);
    print(s,++i,--n);
    
    
}


int main(){
    string str="isha";
    int i=0;
    int n=str.size();
    print(str , i, n);
    cout<<str;
} 

