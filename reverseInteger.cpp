#include<iostream>
using namespace std;
int reverse(int x){
    int ans=0,rem;
    while(x!=0){
        rem=x%10;
        x/=10;
        ans=ans*10+rem;
    }
    return ans;
}

int main(){
    int a;
    cin>>a;
    int res=reverse(a);
    cout<<res;
}