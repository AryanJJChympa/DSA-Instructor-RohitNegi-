#include<iostream>
using namespace std;
static int count=0;
class Construtor{
    int x;
    int y;
    public:

    //default
    Construtor(){
        cout<<"Let's start: ";
    }

    //parameterized constructor
    Construtor(int x, int y){
        this->x=x;
        this->y=y;
    }


    //copy constructor

    Construtor(Construtor &B){
        this->x=B.x;
        this->y=B.y;
        cout<<"I am a copy constructor!"<<endl;
        cout<<x<<" "<<y<<endl;
    }~Construtor(){
        count++;
        // switch(count){

        //     case 1:
        //     cout<<"I am case 1"<<endl;
        //     break;
        //     case 2:
        //     cout<<"I am case 2"<<endl;
        //     break;
        //     case 3:
        //     cout<<"I am case 3"<<endl;
        //     break;
        //     case 4:
        //     cout<<"I am case 4"<<endl;
        //     break;
        //     case 5:
        //     cout<<"I am case 5"<<endl;
        //     break;
        //     case 6:
        //     cout<<"I am case 6"<<endl;
        //     break;
        // }

        for(int i=0; i<10; i++){
            cout<<"I am case: "<<i<<endl;
        }
    }
};

int main(){
    Construtor c1;
  
    Construtor b(c1);
    
    Construtor d[10];

    return 0;
}