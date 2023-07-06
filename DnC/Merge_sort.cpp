#include<bits/stdc++.h>
using namespace std;
//QUICK SEARCH
//USING EXTRA SPACE
void merge(int* arr, int s,int e)
{
    //creating new sorted arrays of left side adn right side
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int* left=new int[len1];
    int* right=new int[len2];

    int k=0;
    for(int i=0;i<len1;i++){
        left[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k++];
    }

    //merge two sorted array

    //Two pointer approach

    int leftIndex=0;
    int rightIndex=0;
    int mainIndex=s;
    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainIndex++]=left[leftIndex++];
        }
        else{
            arr[mainIndex++]=right[rightIndex++];
        }
    }
    //Fill remaining ele
    while(leftIndex<len1){
        arr[mainIndex++]=left[leftIndex++];
    }
    while(rightIndex<len2){
        arr[mainIndex++]=right[rightIndex++];
    }

}

void merge_sort(int* arr,int s,int e)
{
    //Base
    if(s>=e)
        return;

    //processing
    int mid=(s+e)/2;

    //calling
    //sorting-> left side
    merge_sort(arr,s,mid);

    //sorting-> right side
    merge_sort(arr,mid+1,e);

    merge(arr,s,e);
}

int main()
{
    int arr[]={1,4,8,3,9,4};
    int n=6;
    int s=0;
    int e=n-1;
    merge_sort(arr,s,e);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}