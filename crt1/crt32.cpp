#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8 ,9},
    };
    int sum=0;
    int forward;
    int backward;
    for(int i=0; i<matrix.size(); i++){
         forward+=matrix[i][i];
         backward+=matrix[i][2-i];
    }
    cout<<forward;
    cout<<endl;
    cout<<backward;
    }


