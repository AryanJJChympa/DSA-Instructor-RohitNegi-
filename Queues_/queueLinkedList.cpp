#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class Queue{
    Node*front;
    Node*rear;
    public:
    Queue(){
        front=rear=NULL;
    }


bool isEmpty(){
    return front==NULL;
}

void push(int val){
    if(isEmpty()){
        cout<<"Pushed "<<val<<" into the Queue"<<endl;
        front=new Node(val);
        rear=front;
        return;
    }else{
        rear->next=new Node(val);
        if(rear->next==NULL){
            cout<<"Queue Overflow";
            return;
        }
        cout<<"Pushed "<<val<<" into the Queue"<<endl;
        rear=rear->next;
        
    }
}

void pop(){
    if(isEmpty()){
        cout<<"Queue Underflow";
    }else{
        cout<<"Popped "<<front->data<<" from the Queue"<<endl;
        Node*temp=front;
        front=front->next;
        delete temp;
    }
}

int start(){
    if(isEmpty()){
        cout<<"Queue is Empty";
    }else{
        return front->data;
    }
}
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    cout<<q.start()<<endl;
}