#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> d={1,2,3,4,45,67};
    vector<int> s={1,2,45,67};

//    sort(d.begin(),d.end());
//    sort(s.begin(),s.end());
for(int i=0; i<d.size(); i++){
    for(int j=0; j<s.size(); j++){
        if(d[i]==s[j]){
            count++;
        } 
        cout<<count;
    }
    if(count==s.size()-1){
        cout<<"Sucess";
    }
   }
   cout<<"failure";
}