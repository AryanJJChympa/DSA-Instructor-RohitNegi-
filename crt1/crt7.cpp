#include <iostream>
using namespace std;

int f(int n){
    int sum=0;
    for(int i=0; i<=n; i++){
        sum+=i;
    }
    return sum;
    
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<f(n);

    return 0;
}