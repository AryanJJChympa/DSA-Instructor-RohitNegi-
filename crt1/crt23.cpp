#include<iostream>
using namespace std;


void increment(){
    static int x=10; //this will run only once due to static keyword
    cout<<x;
    x++;
}
int x=10; //this will give 101112 due to global x
void increment(){
    cout<<x;
    x++;
}
void increment(){
    int x=10; //this will give 101010 due 
    cout<<x;
    x++;
}

int main(){   
    increment();
    increment();
    increment();
    return 0;
}