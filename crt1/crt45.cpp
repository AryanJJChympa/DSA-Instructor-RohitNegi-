// STRING REVERSE

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "Hello";
    int start=0, end=s.length()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }

    for (int i = 0; i < s.length(); i++)
    {
        cout<<s[i]<<" ";
    }
    
}