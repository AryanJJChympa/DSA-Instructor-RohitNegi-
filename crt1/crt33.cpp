#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8 ,9},
    };
    for(int i=0; i<matrix.size(); i++){
        for(int j=i; j<matrix[0].size(); j++){
            cout<<matrix[j][i];
        }
        cout<<endl;
    }
    }
