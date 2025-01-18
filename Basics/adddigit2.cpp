#include<iostream>
using namespace std;
int adddigit(int num){
    while(num>9){
        int ans=0,rem;
        while(num!=0){
            rem=num%10;
            num/=10;
            ans+=rem;
        }
        num=ans;
    }
    return num;
}

int main(){
    int n=635;
    int res=adddigit(n);
    cout<<res;
}