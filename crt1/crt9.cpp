#include <iostream>
using namespace std;

// struct student{
//     char name[50];
//     int age;
//     float grade;

//     void reading(){
//         cout<<"I am reading";
//         return;
//     }
// };

// int main(){
//     struct student s1={"Greet",19,85.3};
//     cout<<"The student's Name is: "<<s1.name<<endl;
//     cout<<"Student's Age is: "<<s1.age<<endl;
//     cout<<"Student's Grade is: "<<s1.grade<<endl;

//     s1.reading();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// union student{
//     int classW;
//     int age;
//     int grade;
// };

// int main(){
//     union student s1={10,19,85};
//     cout<<"The student's Name is: "<<s1.classW<<endl;
//     cout<<"Student's Age is: "<<s1.age<<endl;
//     cout<<"Student's Grade is: "<<s1.grade<<endl;
//     return 0;
// }

class student
{
public:
    char name[50];
    int age;
    float grade;
};

int main()
{
    student s1 = {"Greet", 19, 85.3};
    s1.name = "Pagluuuuu";
    cout << "The student's Name is: " << s1.name << endl;
    cout << "Student's Age is: " << s1.age << endl;
    cout << "Student's Grade is: " << s1.grade << endl;
    return 0;
}
