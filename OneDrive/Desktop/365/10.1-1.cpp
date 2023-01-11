#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans;
    
    int i=0;
    ans=0;
    while(n!=0)
    {
        
        int bit = n & 1;
        cout<<bit<<"bit"<<endl;
        ans= (bit*pow(10, i) )+ ans;
        n = n >> 1;
        i=i+1;

    }
    cout<<ans<<endl;



}

