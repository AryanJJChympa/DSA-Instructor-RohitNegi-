#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>arr;
    int a;
    cout<<"Enter a: ";
    cin>>a;

    int size;
    cout<<"Enter size";
    cin>>size;

    int formula=a+size-1;

    for(int i=formula; i>=a; i--){
        arr.push_back(i);
    }

    
    for(int i=0; i<arr.size();i++){
        cout<<arr[i];
    }
    // for(int i=a; i<formula; i++){
    //     arr.push_back(i);
    // }

    // int left=0, right=arr.size()-1;

    // while(left>right){
    //     swap(arr[left],arr[tright]);
    // }
    
    // for(int i=0; i<arr.size();i++){
    //     cout<<arr[i];
    // }
}

