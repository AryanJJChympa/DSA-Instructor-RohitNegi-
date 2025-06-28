#include<iostream>
using namespace std;

class Constructor{
    public:
    int a;
    int b;
    Constructor(int a, int b){
        cout<<a+b;
    }
};

int main(){
    Constructor c1(10,20);
}