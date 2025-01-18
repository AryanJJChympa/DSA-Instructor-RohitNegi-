#include<iostream>
using namespace std;

void lowertoupper(string &str, int index){
  if(index==-1){
    return;
  }

  // str[index]='A'+ str[index]- 'a';        for LOWER TO UPPER
  // str[index]='a'+str[index]- 'A';         FOR UPPER TO LOWER

  lowertoupper(str, index-1);
}

int main(){
  string str="aryan";

  lowertoupper(str,4);

  cout<<str;
  return 0;
}