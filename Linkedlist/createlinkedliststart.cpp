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

Node*insertAtstart(Node*head ,int data){
    if(head==NULL){
        return head;
    }

    Node*temp=new Node(data);
    cout<<temp->data<<"->"<<" ";
    temp->next=head;
    head=temp;

}

int main(){

    Node* head, *tail;
    tail=head=NULL; 

    int arr[]={2,4,6,8,10};

    head=createLinkedList(arr,0,5,head);

    insertAtstart(head,20);
    insertAtstart(head,30);
    insertAtstart(head,40);
    insertAtstart(head,50);

    // Node *temp;
    // temp=head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }

    
}