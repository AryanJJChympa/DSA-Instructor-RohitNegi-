#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int>arr){
    int prefix=0, totalSum=0,n=arr.size();

    for(int i=0;i<n;i++){
        totalSum+=arr[i];
    }
    for(int i=0;i<n;i++){
        prefix+=arr[i];
      
        if(totalSum-prefix==prefix){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the element in array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<divide(v);
}