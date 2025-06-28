// Palindrome

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "aba";
    int start=0, end=s.length()-1;
    bool flag=true;
    while(start<=end){
        if(s[start]!=s[end]){
            flag=false;
            break;
        }
        start++;
        end--;
    }
    if(flag==true){
        cout<<"True";
    }else{
        cout << "False";

    }
    
}