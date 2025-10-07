//Find the count of the elements who are greater than all their prior elements in the array
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={7,4,8,2,9};
    stack<int>st;
    int count=0;
    for(int i=0; i<arr.size(); i++){
        if(st.empty()){
            st.push(arr[i]);
            cout<<st.top()<<" ";
            count+=1;

        }
        else if(st.top()<arr[i]){
            st.push(arr[i]);
            cout<<st.top()<<" ";
            count++;
        }
        else{
            continue;
        }
    }

    cout<<endl<<count;
    return 0;

}