#include<iostream>
#include<math.h>
using namespace std;
bool search(int array[],int x,int k){
    for(int i=0;i<x;i++){
        if(array[i]==k){
            return 1;
        }
        
    }
    return 0;
    

}
int main(){
    int n;
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"key"<<endl;
    cin>>key;
    
    if(search(arr,n,key)){
        cout<<"key is found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    
    return 0;
}