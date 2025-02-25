// #include<iostream>
// #include<stack>
// using namespace std;
// void greateronright(int arr[], int size){
//     int i,j;
//     for(i=0; i<size; i++){
//         for(j=i+1; j<size; j++){
//             if(arr[i]<arr[j]){
//                 cout<<arr[j]<<endl;
//                 break;
//             }
//         }
//         if(j==size){
//             cout<<-1;
//         }
//     }
// }

// int main(){
//     int arr[]={6,4,2,13,8,9,7,10,20};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     greateronright(arr,n);

    
//     return 0;
// }



#include<iostream>
#include<stack>
using namespace std;
void greateronright(int arr[], int size){
    stack<int>st;
    int i;
    for(i=size-1; i>=0; i--){
        while(!st.empty() && st.top()<arr[i]){
            st.pop();
        }
        
        if(st.size()==0){
            cout<<-1<<endl;
        }else{
            cout<<st.top()<<endl;
        }
        st.push(arr[i]);
    }
}

int main(){
    int arr[]={6,4,2,13,8,9,7,10,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    

    greateronright(arr,n);
    return 0;
}