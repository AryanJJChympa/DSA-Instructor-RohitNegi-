#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {0, 0, 1, 1},
        {1, 1, 1, 0},
        {1, 1 ,1, 1},
    };
    int maxi=0;int rowcnt=0;
    int prevMaxi;
    for(int i=0; i<matrix.size(); i++){
        int count=0;
        for(int j=0; j<matrix[0].size(); j++){
           if(matrix[i][j]==1){
            count++;
        }
        maxi=max(maxi,count);
        
    }
    if(maxi!=prevMaxi){
        prevMaxi=maxi;
        cout<<i;
    }
}
// cout<<maxi;
}