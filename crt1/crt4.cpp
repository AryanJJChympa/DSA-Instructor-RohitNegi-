#include <iostream>
using namespace std;

void f(int n,int m){
    if(n==m){
        cout<<"Equal";
    }else if(n>m){
        cout<<n<<" is greater";
    }else{
        cout<<m<<" is greater";
    }
}

int main()
{
    int n;
    int m;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter second num:  ";
    cin>>m;
    f(n,m);

    return 0;
}