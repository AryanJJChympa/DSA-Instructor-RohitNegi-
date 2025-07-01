#include<iostream>
using namespace std;

int main(){
    string s1="abcdefg";
    string s2="dbea";

    for(int i=0; i<s1.length(); i++){
        //replacement krna hai
        if(s1[i]!=s2[i]){
            s2[i]=s1[i];
        }
        //deletion krna hai
        else if(s2.length()>s1.length()){
            for(int j=s1.length(); j<s2.length(); j++){
                s2[j]=9;
            }
        }
        //insertion krna hai
        else if(s2.length()<s1.length()){
            for(int j=s2.length(); j<s1.length(); j++){
                s2[j]=s1[j];
            }
        }

    }
    cout<<s2;
}