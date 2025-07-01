#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main(){
    vector<int>arr={0,0,1};
    vector<int>ans;
    sort(arr.begin(), arr.end());


    int n=arr.size();
    int maxVal=arr[n-1]-1;
    int duplicate=0;
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
            duplicate=arr[i];
        }
    }

    cout<<duplicate<<","<<maxVal;

}