//given an array of integers .For every index print the greatest number on its right
//example A={2,10,6,8,4,7}

#include<iostream>
using namespace std;
int f(int arr[], int index,int n){
    int soFarMax=-1;
    for(int i=index; i<=n-1; i++){
        if(arr[i]>soFarMax)
        soFarMax=arr[i];
    }
    return soFarMax;
}

int main(){
    int arr[]={2,10,6,8,4,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    

    for(int i=0; i<size; i++){
        cout<<f(arr,i+1,size)<<" ";
    }
    return 0;
}

//O(n2)

// for(int i=n-1;i>=0;i--){
//     cout<<soFarMax;
//     if(arr[i]>soFarMax){
//         soFarMax=arr[i];
//     }
// }

//O(N)