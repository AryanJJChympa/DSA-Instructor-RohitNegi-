#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>> matrix = {
        {1, -2, 1},
        {2, 1, 3},
    };
    vector<vector<int>> matrix2= {
        {2, 1},
        {3, 2},
        {1, 1},
    };
    vector<vector<int>> matrix3= {
        {0, 0},
        {0, 0},
    };
    
    for(int i=0; i<matrix.size(); i++){
        int sum=0;    
        for(int j=0;j<matrix2.size();j++){
            sum+=matrix[i][j]*matrix2[j][i];
        } 
        matrix3[i][j]=sum;
    }
        
        for(int i=0; i<matrix3.size(); i++){
        for(int j=0; j<matrix3[0].size(); j++){
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }
}