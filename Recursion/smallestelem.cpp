#include<iostream>
using namespace std;
//Using Loop
// int minElement(int arr[], int index){
//   return arr[index];
// }
// int main(){
//   int arr[]={3,4,1,2,8};
//   int num = arr[0]; 
//   for(int i=0; i<5; i++){
//     num=min(num,minElement(arr,i));
//   }
//   cout<<num;
// }


// using recursion
int minElement(int arr[], int index,int n){
  if(index==n-1){
    return arr[index];
  }

  return min(arr[index], minElement(arr, index+1,n));
}

int main(){
  int arr[]={3,4,6,2,8};
  
  cout<<minElement(arr,0,4);
  return 0;
}


