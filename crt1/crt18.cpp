#include<iostream>
using namespace std;

// // CALL BY VALUE
// void swap(int a, int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// int main(){
//     int a=1, b=2;
//     cout<<"Before swapping: ";
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
//     cout<<"After swapping: ";
//     cout<<a<<" "<<b<<endl;
// }


// // CALL BY REFERENCE
// void swap(int &a, int &b){
//     int temp=a;
//     a=b;
//     b=temp;
    
// }
// int main(){
//     int a=1, b=2;
//     cout<<"Before swapping: ";
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
//     cout<<"After swapping: ";
//     cout<<a<<" "<<b<<endl;
// }


// CALL BY POINTER
void swap(int *p1, int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(){
    int a=1, b=2;
    cout<<"Before swapping: ";
    cout<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping: ";
    cout<<a<<" "<<b<<endl;
}