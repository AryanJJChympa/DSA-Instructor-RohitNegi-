#include<iostream>
#include<stack>
using namespace std;
void greateronright(string str){
    stack<int>st;
    int i;
    for(i=0 i<str.length; i++){
        
        if(str[i] == "{"){
         st.push(str[i]);   
        }else{

        }
    }
}

int main(){
    string str="{{}{{}}}{}";
    greateronright(str);
    return 0;
}