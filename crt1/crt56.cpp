#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>


int main(){
    vector<int>arr={4,3,6,8,1,9,13,7,14,15};
    vector<int>arrE;
    vector<int>arrO;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2==0){
            arrE.push_back(arr[i]);
        }else if(arr[i]%2!=0){
            arrO.push_back(arr[i]);
        }
    }

    sort(arrE.begin(), arrE.end());
    sort(arrO.rbegin(), arrO.rend());

    for(int i=0; i<arrE.size(); i++){
        arr[i]=arrE[i];
    }

    for(int i=0; i<arr.size(); i++){
        arr[arrE.size()+i]=arrO[i];
        cout<<arr[i]<<" ";
    }
    return 0;

}