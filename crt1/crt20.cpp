#include<iostream>
using namespace std;

class MyClass{
    public:
    MyClass(int x):data(x){
        cout<<"Constructor is running"<<endl;
    }~MyClass(){
        cout<<"Deconstructor is running"<<endl;
    }
    private: 
    int data;
};

int main(){
    MyClass obj1(1);
    MyClass obj2=obj1;

    //Destructor will be called just before return statement
    return 0;
}
