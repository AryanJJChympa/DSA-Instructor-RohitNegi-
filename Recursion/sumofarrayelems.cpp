#include<iostream>
using namespace std;

int ArrSum(int arr[], int index, int n){
  if(index==n)
  return 0;

  return arr[index]+ArrSum(arr,index+1,n);
}

int main(){
  int arr[]={5,3,8,9,2};

  cout<<ArrSum(arr,0,5);
  return 0;
}