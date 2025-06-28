#include<iostream>
using namespace std;


// METHOD 1:
// int main(){
//     int a=1, b=2;
//     cout<<"Before swapping: ";
//     cout<<a<<" "<<b<<endl;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"After swapping: ";
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }



// METHOD 2:
// void swap(int &a, int &b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"After swapping: ";
//     cout<<a<<" "<<b<<endl;
// }
// int main(){
//     int a=1, b=2;
//     cout<<"Before swapping: ";
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
// }



// METHOD 3:
// void swap(int &a, int &b){
//     int temp=a;
//     a=b;
//     b=temp;
//     cout<<"After swapping: ";
//     cout<<a<<" "<<b<<endl;
// }
// int main(){
//     int a=1, b=2;
    // cout<<"Before swapping: ";
    // cout<<a<<" "<<b<<endl;
//     swap(a,b);
//}



// METHOD 4: (XOR CONCEPT)
// a^a=0
// 0^a=a

// void swap(int &a, int &b){
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     cout<<"After swapping: ";
//     cout<<a<<" "<<b<<endl;
// }
// int main(){
//     int a=1, b=2;
//     cout<<"Before swapping: ";
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
// }



// METHOD 5 EXPRESSION IN ONE LINE

// void swap(int &a, int &b){
//     a=a+b-(b=a);
//     cout<<"After swapping: ";
//     cout<<a<<" "<<b<<endl;
// }
// int main(){
//     int a=1, b=2;
//     cout<<"Before swapping: ";
//     cout<<a<<" "<<b<<endl;
//     swap(a,b);
// }


