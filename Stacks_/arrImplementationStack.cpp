#include<iostream>
using namespace std;

class stack{
    int *arr;
    int size;
    int top;
    public:
    stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
    }

    void push(int value){
        if(top==size-1){
            cout<<"Stack Overflow";
            return;
        }
        else{
            top++;
            arr[top]=value;
            cout<<value<<" Pushed into the stack\n";
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow";
        }else{
            cout<<arr[top]<<" Popped from the stack"<<endl;
            top--;
        }
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty";
            return -1;
        }else{
            return arr[top];
        }
    }

    bool IsEmpty(){
        return top==-1;
    }

    int IsSize(){
        cout<<"Size of stack is "<<top+1<<endl;     
    }  
};

int main(){
    stack s(5);
    s.push(6);
    s.push(5);
    s.push(4);
    s.pop();
    s.IsSize();
    s.IsEmpty();
}