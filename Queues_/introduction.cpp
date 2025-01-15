#include<iostream>
using namespace std;

class Queue{
    int*arr;
    int front,rear;
    int size;
    public: 
    Queue(int n){
        arr=new int[n];
        front=rear=-1;
        size=n; 
    }
bool isEmpty(){
    return front==-1;
}

bool isFull(){
    return rear==size-1;
}

void push(int x){
    if(isEmpty()){
        cout<<"Pushed "<<x<<" into the Queue\n";
        front=rear=0;
        arr[0]=x;
        return;
    }else if(isFull()){
        cout<<"Queue is full.";
        return;
    }else{
        rear=rear+1;
        arr[rear]=x;
        cout<<"Pushed "<<x<<" into the Queue\n";
    }
}

void pop(){
    if(isEmpty()){
        cout<<"Queue Underflow";
        return;
    }else{
        if(front==rear){
            cout<<"Popped "<<arr[front]<<" from the Queue\n";
            front=rear=-1;
        }else{
            cout<<"Popped "<<arr[front]<<" from the Queue\n";
            front+=1;
        }
    }
}

int start(){
    if(isEmpty()){
        cout<<"Queue underflow.";
        return -1;
    }else{
        return arr[front];
    }
}
};

int main(){
    Queue q(10);
    q.push(5);
    q.push(10);
    q.push(19);
    q.pop();
}


