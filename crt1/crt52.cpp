#include<iostream>
using namespace std;

int main(){
    string str="welcome";
    string sub="come";
    bool found=false;
    

    for(int i=0; i<=str.length()-sub.length();i++){
        int j=0;
        while(j<sub.length() && str[i+j]==sub[j]){
            j++;
        }
        if(j==sub.length()){
            found=true;
            break;
        }
    }
    if(found){
        cout<<"True";
    }else{
        cout<<"False";
    }
   
}