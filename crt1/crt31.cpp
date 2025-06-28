#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,2,5};
    int sum=0;
    for(int i=0; i<arr.size(); i++){
        sum+=sum*10+arr[i];
    }

    cout<<sum;
    
}