#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imag;


    void print(Complex num){
        cout<<num.real<<"+ "<<num.imag<<"i "<<endl;
    }

    Complex operator+(Complex rop){
        Complex add;
        add.real=real+rop.real;
        add.imag=imag+rop.imag;
        return add;
    }
};

int main(){
    Complex num1, num2;
    num1.real=2;
    num1.imag=5;
    num2.real=3;
    num2.imag=6;
    Complex res=num1+num2;
    res.print();
}