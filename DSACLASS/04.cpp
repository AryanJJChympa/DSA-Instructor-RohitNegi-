//given an array and a target number T .Check if there is a pair of elements in array whose ssum is T.

#include<iostream>
using namespace std;
bool f(int arr[],int n,int T){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==T){
                return true;
            }
        }
    }
    return false;
}



int main(){
    // int arr[]={9,6,4,8,-3,2,1,7};
    int arr[]={6,4,3,-2,9,8,-3,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target =8;
    cout<<f(arr,size,target);


    return 0;

}