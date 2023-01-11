#include<iostream>
#include<math.h>
using namespace std;
int maxi(int arr[],int x){
    int max=INT32_MIN;

    for(int i=0;i<x;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}
int mini(int arr[],int x){
    int min=INT32_MAX;
    for(int i=0;i<x;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;

}
int main(){
    int arr[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int max_value=maxi(arr,n);
    int min_value=mini(arr,n);
    cout<<max_value<<endl;
    cout<<min_value<<endl;
    return 0;
    

}