#include<iostream>
using namespace std;


int main(){
    int arr[]={9,6,4,11,2,4,10,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int ans;
    for(int j=0; j<n; j++){
        int ans=arr[j];

        for(int i=0; i<n; i++){
            if(arr[i]==ans){
                count++;
            }
            if(count==3){
                cout<<ans;
                break;
            }
    }
    }
    cout<<ans;
    return 0;
}
