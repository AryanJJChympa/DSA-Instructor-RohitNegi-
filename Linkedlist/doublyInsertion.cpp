#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};


// Node* CreateDLL(int arr[], int index, int size, Node* back){
//     if(index==size)
//     return NULL;

//     Node* temp=new Node(arr[index]);
//     temp->prev=back;
//     temp->next=CreateDLL(arr,index+1,size,temp);
//     return temp;
// }


int main(){
    Node* head=NULL , *tail=NULL;
    
    // // CREATING DOUBLY LINKED LIST
    int arr[]={1,2,3,4,5};
    
    // // Creating USING RECURSION
    head=CreateDLL(arr,0,5,NULL);

    // for(int i=0; i<5; i++){
    //     //LINKED LIST DOESN't EXIST
    //     if(head==NULL){
    //         head=new Node(arr[i]);
    //         tail=head;
    //     } 
    //     //ALREADY EXIST
    //     else{
    //         Node* temp=new Node(arr[i]);
    //         tail->next=temp;
    //         temp->prev=tail;
    //         tail=temp;
    //     }
    // }

    // //INSERT AT START:
    // //LINKED LIST DOESN't EXIST
    // if(head==NULL){
    //     head=new Node(5);
    // }
    // //ALREADY EXIST
    // else{
    //     Node* temp=new Node(5);
    //     temp->next=head;
    //     head->prev=temp;
    //     head=temp;
    // }


    // //INSERT AT END
    // //LINKED LIST DOESN'T EXIST
    // if(head==NULL){
    //     head=new Node(5);
    // }
    // //ALREADY EXIST
    // Node* curr=head;
    // while(curr->next){
    //     curr=curr->next;
    // }
    // Node* temp=new Node(5);
    // curr->next=temp;
    // temp->prev=curr;


    // //INSERT AT POSITION
    // int x=2;
    // int data=25;


    // Node*temp=head, *prev=;
    // while(x--){
    //     temp=temp->next;
    //     temp->prev=
    // }



    Node* trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
    return 0;
}