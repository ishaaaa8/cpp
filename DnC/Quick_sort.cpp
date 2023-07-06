#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivotIndex=s;
    int pivotElement=arr[pivotIndex];

    int count=0;
    for(int i=s;i<=e;i++){
        if(arr[i]<pivotElement)
            count++;
    }
    int rightIndex=s+count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex=rightIndex;

    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;


}

void Quick_sort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }

    int p=partition(arr,s,e);

    Quick_sort(arr,s,p-1);
    Quick_sort(arr,p+1,e);
}
int main(){
    int arr[]={4,8,6,2,6,1};
    int n=6;
    int s=0;
    int e=n-1;
    Quick_sort(arr,s,e);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}