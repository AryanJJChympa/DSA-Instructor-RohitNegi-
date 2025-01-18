#include<iostream>
using namespace std;
int main(){
    int digit;
    cin>>digit;
    int a,b,ans;
    a=digit%10;
    b=digit/10;
    ans=a+b;
    cout<<ans;
}