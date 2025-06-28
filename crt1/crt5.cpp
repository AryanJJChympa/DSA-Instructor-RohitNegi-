#include <iostream>
using namespace std;

int f(int n,int m, int o){
    if(n>m && n>o){
        return n;
    }else if(m>n && m>o){
        return m;
    }else if(n==m && n==o){
        return 1;
    }
    else{
        return o;
    }
}

int main()
{
    int n,m,o;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter second num:  ";
    cin>>m;
    cout<<"Enter third num: ";
    cin>>o;
    cout<<f(n,m,o);

    return 0;
}