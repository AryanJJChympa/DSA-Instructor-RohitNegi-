#include<iostream>
using namespace std;
int main(){
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int index=0;
    int x=7;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==x){
                index=arr[i][j];
                cout<<i<<" "<<j;
                return 0;

            }
        }
    }

}