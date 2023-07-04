#include<bits/stdc++.h>
using namespace std;
bool isPal(string& s,int start, int end)
{  
    if(start>=end){
        return true;
    }
    if(s[start]!=s[end])
    {
        return false;
    }
    isPal(s,start+1,end-1);
    return true;
    
}


int main(){
    string str="racecar";
    if(isPal(str,0,str.size()-1)){
        cout<<"Palindrome";

    }
    else{
        cout<<"Nahi!";
    }
} 

