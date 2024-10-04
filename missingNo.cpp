#include<iostream>
using namespace std;
int missingNumber(int array[],int n){
    int sum=0;
    for(int i=0; i<n-1;i++)
    sum+=array[i]; 

    int ans=n*(n+1)/2;
    return ans-sum;
}
int main(){
    int a[8]={1,3,4,5,6,7,8};
    int N=8;
    int res=missingNumber(a,N);
    cout<<res;
}

