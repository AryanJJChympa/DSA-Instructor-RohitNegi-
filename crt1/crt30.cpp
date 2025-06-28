#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8 ,9},
    };
    // for(auto i:matrix){
    //     int sum=0;
    //     for(auto j:i){
    //         sum+=j;
    //     }
    //     cout<<sum;
    //     cout<<endl;
    // }
    for(int i=0; i<matrix.size(); i++){
        int sum=0;
        for(int j=0; j<matrix[0].size();j++){
            sum+=matrix[i][j]
            ;
        }
        
        cout<<sum;
        cout<<endl;
    }
    }


