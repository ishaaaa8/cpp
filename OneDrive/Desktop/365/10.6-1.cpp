#include<iostream>
#include<math.h>
using namespace std;
void reverse(int a[],int x){
    int start=0;
    int end=x-1;
    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    
    
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}