#include<iostream>
using namespace std;

int main(){
    //int arr[6]={5,4,3,6,8,9};
    int arr[1000];
    int n;
    cout<<"Enter the size of array  : ";
    cin>>n;
    cout<<"Enter the elements in array : ";
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){

        int index=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index])
                index=j;
        }
        swap(arr[i],arr[index]);
    }
    cout<<"The array after selection sort is : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
