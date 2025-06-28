#include<iostream>
using namespace std;

int main(){
    int unit;
    cin>>unit;
    int bill=0;

    if(unit>=0 && unit<=100){
        bill+=200;
        else if(unit>100 && unit<=200){
            bill+=2*unit;
        }
    }


}

// 0-100:200
// 101-200:2rs + 200fc
// 201-300:3rs + 200fc
// 301-400:5rs + 200fc
// 401-above:7rs + 200fc