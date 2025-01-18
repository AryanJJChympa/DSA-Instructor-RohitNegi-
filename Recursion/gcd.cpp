#include<iostream>
using namespace std;


//I used Euclidean algorithm where b comes in position of a and a is mod by b and placed in position of b , This keeps on repeating until b becomes 0 and then a is returned as answer...

int gcd(int a, int b){
  if(b==0){
    return a;
  }
  return gcd(b,a%b);
}

int main(){
  int a;
  cin>>a;
  int b;
  cin>>b;
  cout<<gcd(a,b);
  return 0;
}