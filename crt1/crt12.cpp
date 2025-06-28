#include<iostream>
using namespace std;



class Shape{
    public:
    int len;
    int breadth;
    int r;
    float side;
    
    int rectangleA(int PI, int r){
        return len*breadth;
    }
    
    
    int circleA(int r){
        return 3.14 * r* r;
    }

    int squareA(float side=100){
        return side*side;
    }
    int randomA(int x=10, int y=20, int z=19){
        return x+y+z;
    }
};



int main(){
    Shape rectangle;
    Shape circle;
    Shape square;
    Shape random;
    
    cout<<"The area of rectangle is: "<<rectangle.rectangleA(10,20)<<endl;
    cout<<"The area of circle is: "<<circle.circleA(10)<<endl;
    cout<<"The area of square is: "<<square.squareA(20)<<endl;
    cout<<"The area of random is: "<<square.randomA(,,20)<<endl;
    return 0;       
}