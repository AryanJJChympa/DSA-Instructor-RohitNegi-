#include<iostream>
using namespace std;

void reverseString(string &str, int start, int end){
  if(start>=end){
    return;
  }

  char temp= str[start];
  str[start]=str[end];
  str[end]=temp;
  reverseString(str,start+1,end-1);
}

int main(){
  string str="aryan";

  reverseString(str,0,4);

  cout<<str;
  return 0;
}