#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free for node with data "<<val<<endl;
    }
};

//traversing a linked list
void print(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//gives the length of linked list
int getLinkedListLength(Node* head){
    int length =0;
    Node* temp=head;

    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

void insertAtHead(Node* &tail,Node* &head, int d){
    //empty list
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node* &tail,Node* &head, int d){

    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }else{
        Node* temp =new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        
    }
    Node* temp =new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    if(position==1){
        insertAtHead(tail,head,d);
        return;
    }
    Node* temp = head;
    int count=1;

    while(count< position-1){
        temp =temp->next;
        count++;
    }
    //inserting at Last Position
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }

    //Creating a node for d
    Node* nodeToInsert= new Node(d);

    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}

void deleteNode(int position, Node* &head){
        //deleting first or start node
        if(position==1){
            Node* temp=head;
            temp->next->prev=NULL;
            head=temp->next;
            temp->next=NULL;
            delete temp;
        }

        //deleting any middle node or last Node
        else{
            Node* curr=head;
            Node*   prev=NULL;

            int count=1;
            while(count<position){
                prev=curr;
                curr=curr->next;
                count++;
            }
            
            curr->prev=NULL;
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    }


int main(){
    Node* newNode=new Node(10);
    Node* head=newNode;
    Node* tail=newNode;
    print(head);
    // cout<<getLinkedListLength(head)<<endl;

    insertAtHead(tail,head,11);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(tail,head,13);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(tail,head,8);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtTail(tail,head,25);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail, head, 7 ,102);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    

    deleteNode()
    return 0;
}