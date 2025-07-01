#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,0,2,3,0,4,5,0};
    int n=arr.size();
    vector<int>ans;
    int k=0;


    for(int i=0; i<n; i++){
        ans.push_back(arr[i]);
        if(arr[i]==k){
            ans.push_back(k);           
        }
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}