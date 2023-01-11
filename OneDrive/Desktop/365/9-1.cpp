#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a character to be checked"<<endl;
    ch=cin.get();
    if(ch>='a'&&ch<='z'){
        cout<<"character is in lowercase"<<endl;
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"character is in uppercase"<<endl;
    }
    else if(ch>='0'&&ch<='9'){
        cout<<ch<<"character is numeric"<<endl;
    }
    

}