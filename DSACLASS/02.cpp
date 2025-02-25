//given an array of integers for every index check if there is a greater element or not in its right 

//example A={9,6,4,10,7,3,5}

//output 1 for true 0 for false

#include<iostream>
using namespace std;
void f(int arr[], int index,int n){
    int soFarMax=-1;
    for(int i=index; i<=n-1; i++){
        if(arr[i]>soFarMax){
        cout<<0<<" ";
        }
        else{
        cout<<1<<" ";
        }
        soFarMax=max(soFarMax,arr[i]);
    }
    
}

int main(){
    int arr[]={9,6,4,10,7,3,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    f(arr,0,size);
    return 0;
}