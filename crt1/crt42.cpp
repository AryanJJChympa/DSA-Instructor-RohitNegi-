#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> d={1,1,2,2};
    int elem=2;
    int count=0;
    for(int i=0; i<d.size(); i++){
        if(d[i]!=elem){
            count++;
        }
    }
    cout<<count;
}