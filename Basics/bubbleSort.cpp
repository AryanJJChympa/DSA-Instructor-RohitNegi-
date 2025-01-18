#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the no. of elements in array: ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=n-2; i>=0 ; i--){
        for(int j=0; j<=i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"The array after bubble sort is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
