#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int amt;
    cin>>amt;
    switch(1){
        case('100'):
        int n100=amt/100;
        cout<<"number of 100 rs note required:"<<n100<<endl;
        case('50'):
        int n50=((amt-(n100*100))/50);
        cout<<"number of 50 rs note required:"<<n50<<endl;
        case('10'):
        int n10=((amt-(n50*50)-(n100*100))/10);
        cout<<"number of 10 rs note required:"<<n10<<endl;
        case('1'):
        int n1=((amt-(n50*50)-(n100*100)-(n10*10))/1);
        cout<<"number of 1 rs note required:"<<n1<<endl;

    }
}