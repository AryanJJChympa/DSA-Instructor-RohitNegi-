#include<bits/stdc++.h> //GODFATHER
using namespace std;

class GrandParent{
    public:
    GrandParent(){
        cout<<"I am grandParent"<<endl;
    }
    void run(){
        cout<<"I can't run dear";
    }

};
class Parent :public GrandParent{
    public:
    Parent(){
        cout<<"I am parent"<<endl;
    }

    void run(){
        cout<<"I can't run my son";
    }
};
class Child: public Parent{
    public:
    Child(){
        cout<<"I am child"<<endl;
    }
};

// //Hierarchical
// class A{
//     public:
//     A(){
//         cout<<"I am Parent"<<endl;
//     }
// };
// class B : A{
//     public:
//     Parent(){
//         cout<<"I am first child"<<endl;
//     }
// };
// class C: public A{
//     public:
//     Child(){
//         cout<<"I am second child"<<endl;
//     }
// };


//Calling order is normal that is bottom up
//Returning order is reversed that is top down
int main(){
    
    Child c;
    c.run();
}