#include<iostream>
using namespace std;

void search(int arr[],int target,int n){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            cout<<"Haiiii";
            return;
        }
    }
    cout<<"Nahi hai";
}

int main(){
    int arr[10]={1,2,3,4,8,7,32,9,10,15};
    int n=10;
    int t=99;
    search(arr,t,n);
    return 0;
}

//Sorting - Bubble sort
//2 sum problem
//Binary searc0