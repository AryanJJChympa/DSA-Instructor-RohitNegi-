#include<iostream>
using namespace std;

int pow(int num,int n){
  if(n==0){
    return 1;
  }
  if(n==1){
    return num;
  }

  return num*pow(num,n-1);
}

int main(){
  int num=2;
  int n;
  cin>>n;
  cout<<pow(num,n);
  return 0;
}