#include<iostream>
using namespace std;

int BinarySearch(int arr[] ,int n, int x){
    int start=0, end=n-1, mid;

    while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]<x){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"Enter the target :";
    cin>>target;

    cout<<BinarySearch(arr , size ,target);
    return 0;
}