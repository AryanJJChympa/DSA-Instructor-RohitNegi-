#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

class Stack{
    public:
    Node*top;
    int size;
    Stack(){
        top=NULL;
        size=0;
    }

    void push(int value){
        Node*temp=new Node(value);
        if(temp==NULL){
            cout<<"Stack overflow";
            return;
        }else{
        temp->next=top;
        top=temp;
        size++;
        cout<<"Pushed "<<value<<" into the stack"<<endl;
        }
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }else{
            Node*temp=top;
            cout<<"Popped "<<top->data<<" from the stack"<<endl;
            top=top->next;
            delete temp;
        }
    }

    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }else{
            return top->data;
        }
    }

    bool isEmpty(){
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return true;
        }else{
            return false; 
        }
    }

    int isSize(){
        return size;
    }
};

int main(){
    Stack s;
    s.push(6);
    s.push(7);
    s.push(8);
    s.pop();
    cout<<s.peek();
}