#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> d={1,2,3,10,6};
    int product=0;
    for(int i=0; i<d.size()-2; i++){   
        for(int j=i+1; j<d.size()-1; j++){
            for(int k=j+1; k<d.size();k++){
                int currPro=d[i]*d[j]*d[k];
                product=max(product,currPro);
            }
        }
    }
    cout<<"PRODUCT AGAYAAAAA!! : "<<product;
}



// 2nd method sort and product of last three elems