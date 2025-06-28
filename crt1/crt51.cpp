#include<iostream>
using namespace std;

int main(){
    string s="bijli ka bill tera baap bharega";

    int left=0, right=s.length()-1;

    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }

    cout<<s;
}