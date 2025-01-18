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

Node* createLinkedList(int arr[], int index, int size, Node* prev){
    if(index == size){
        return prev;
    }
    Node* temp;
    temp=new Node(arr[index]);
    temp->next=prev;
    createLinkedList(arr,index+1,size,temp);
}

int main(){
    // Node A1(4); //Static way

    Node* head, *tail;
    tail=head=NULL; // to start with an empty head

    int arr[]={2,4,6,8,10};

    head=createLinkedList(arr,0,5,head);

    Node *temp;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}