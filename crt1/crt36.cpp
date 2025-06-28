#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>> matrix = {
        {1, 2, 56},
        {4, 5, 6},
        {16, 17 ,18},
    };
    for(int i=0; i<matrix.size(); i++){
        int currmax=0;
        int maxi=0;
        for(int j=0; j<matrix[0].size(); j++){
           if(matrix[i][j]>matrix[i][j+1]){
            currmax=max(matrix[i][j],matrix[i][j+1]);
            maxi=currmax;
        }
    }
    cout<<max(maxi,currmax);
    cout<<endl;

    }
}