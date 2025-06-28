#include<iostream>
using namespace std;
#include<stack>

int main(){

        string s="aryan is a boy";
        stack<char>st;
        string ans="";
        for(int i=0; i<s.length(); i++){
            if(s[i]==' '){
                while(!st.empty()){
                    ans[i]=to_string(st.top());
                    st.pop();
                }
            }
        st.push(s[i]); 

        }
        cout<< ans;
    }
