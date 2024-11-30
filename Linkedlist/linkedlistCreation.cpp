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

Node* createLinkedList(int arr[], int index, int size){
    if(index==size){
        return NULL;
    }

    Node* temp;
    temp=new Node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size);
    return temp;
}

int main(){
    // Node A1(4); //Static way

    Node* head, *tail;
    tail=head=NULL; // to start with an empty head

    int arr[]={2,4,6,8,10};

    head=createLinkedList(arr,0,5);
    // //insert the node at beginning
     // //Linked list doesn't exist
    // for(int i=0;i<5;i++){
    //     if(head==NULL){
    //         head=new Node(arr[i]);
    //     }
    //     //Linked list exist
    //     else{
    //         Node* temp;
    //         temp=new Node(arr[i]);
    //         temp->next=head;
    //         head=temp;
    //     }
    // }

    // //Print the value

    // Node* temp = head; //creating a new pointer temp which points head ...
    // while(temp!=NULL){ //OR while(temp){  
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }

    //Insert the value at end
    //when linked list doesn't exist
    // for (int i=0; i<5; i++){
    //     if(head==NULL){
    //         head= new Node(arr[i]);
    //         tail=head;
    //     }
    //     //WHEN linked list EXIST
    //     else{
    //         tail->next=new Node(arr[i]);
    //         tail=tail->next;
    //     }
    // }


    //Insert node at particular position
    int x=3;
    int value=30;

    Node* temp=head;
    x--;

    while(x--){
        temp=temp->next;
    }

    Node* temp2=new Node(value);

    temp2->next=temp->next;
    temp->next=temp2;


    //Print the value
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}