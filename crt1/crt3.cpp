#include <iostream>
using namespace std;

void f(int n){
    if(n%2==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    f(n);

    return 0;
}