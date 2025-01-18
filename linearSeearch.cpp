#include<iostream>
using namespace std;

int linearSearch(int arr[],int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={3,7,2,17,11,34,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter the target: ";
    cin>>target;

    int indexSearch=linearSearch(arr ,size ,target);
        cout<<"Element found at index: "<<indexSearch<<endl;
    return 0;
}