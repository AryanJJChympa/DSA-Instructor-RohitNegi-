#include <iostream>
using namespace std;

void f(int n){
    if(n>0){
        cout<<"Positive";
    }
    else if(n<0){
        cout<<"Negative";
    }else{
        cout<<"Zero";
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