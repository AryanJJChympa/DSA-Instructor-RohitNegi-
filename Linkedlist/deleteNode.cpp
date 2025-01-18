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
    if(index == size){
        return NULL;
    }
    Node* temp=new Node(arr[index]);
    temp->next=createLinkedList(arr,index+1,size);
    return temp;
}

int main(){

    Node* head;
    head=NULL; // to start with an empty head

    int arr[]={2,4,6,8,10};

    head=createLinkedList(arr,0,5);

//------------DElete a NODE at starting---------------------
    // if(head!=NULL){
    //     Node *temp=head;
    //     head=head->next;
    //     delete temp;
    // }
    

//------------Delete a NODE at ending-----------------------
    // if(head!=NULL){
    //     //Only one node is present 
    //     if(head->next==NULL){
    //         Node* temp=head;
    //         delete temp;
    //         head=NULL;
    //     }
    //     //More than one node is present
    //     else{
    //         Node* curr=head;
    //         Node* prev=NULL; 
    //         //curr->next is not NULL
    //         while(curr->next!=NULL){
    //             prev=curr;
    //             curr=curr->next;
    //         }
    //         prev->next=curr->next;
    //         delete curr;
    //     }
    // }


//------------Delete a Node at position---------------------

    while(head){
        cout<<head->data<<" ";
        head=head->next;        
    }
}