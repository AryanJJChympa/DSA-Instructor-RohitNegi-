#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>arr1={2,1,3};
    vector<int>arr2={7,8,9};
    int k=10;
    bool flag=true;
    sort(arr1.begin(),arr1.end());
    sort(arr2.rbegin(),arr2.rend());
    int i=0,j=0;
    while(i<arr1.size()){
        if(arr1[i]+arr2[j]>=k){
            i++;
            j++;
        }
        else{
            flag=false;
            cout<<"NO";
            break;
        }
    }
    if(flag==true){
        cout<<"yes";   
    }
}