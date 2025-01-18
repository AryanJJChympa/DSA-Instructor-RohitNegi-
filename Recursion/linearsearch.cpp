#include<iostream>
using namespace std;

bool linearSearch(int arr[], int index, int x, int N){

  if(index==N){
    return 0;
  }
  if(arr[index]==x){
    return 1;
  }

  return linearSearch(arr, index+1, x, N);
}


int main(){
  int arr[]={9,7,3,5,6,2};
  int x=5;  
  cout<<linearSearch(arr, 0, x, 6)<<endl;
}