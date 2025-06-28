#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>


int main(){
    vector<vector<int>> matrix = {
        {4, 5, 3},
        {1, 2, 6},
        {7, 8, 9},
    };
    
    
vector<int>ans;
for(int i=0; i<matrix.size(); i++){
    for(int j=0; j<matrix[0].size(); j++){
        ans.push_back(matrix[i][j]);
    }
}


sort(ans.begin(), ans.end());

while(k<ans.size()){
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size() ;j++){
            matrix[i][j]=ans[k];
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}

}

