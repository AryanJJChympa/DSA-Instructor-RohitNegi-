#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //Constructor
    Node(int data){
        this-> data =data;
        this -> next=NULL;
    }

    //destructor
    ~Node(){
        int value= this ->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;
    }
};

    void insertAtHead(Node* &head, int d){

        //new node create
        Node* temp = new Node(d);
        temp -> next =head;
        head = temp;
    }

    void insertAtTail(Node* &tail, int d){
        //new node create
        Node* temp = new Node(d);
        tail->next=temp;
        tail=tail->next;
    }

    void print(Node* &head){
        Node* temp = head;

        while(temp !=NULL){
            cout<<temp ->data<<" ";
            temp = temp->next;

        }
        cout<<endl;
    }

    void insertAtPosition(Node* &tail ,Node* &head, int position, int d){
        if(position==1){
            insertAtHead(head,d);
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
            insertAtTail(tail,d);
            return;

        }

        //Creating a node for d
        Node* nodeToInsert= new Node(d);

        nodeToInsert->next=temp->next;
        temp->next=nodeToInsert;
    }

    void deleteNode(int position, Node* &head){
        //deleting first or start node
        if(position==1){
            Node* temp=head;
            head=head->next;
            //memory free start node
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
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }
    }

int main(){
    //created a new node
    Node* newNode= new Node(10);
    // cout<<newNode->data<<endl;
    // cout<<newNode->next<<endl;

    //head pointed to newnode
    Node* head= newNode; 
    Node* tail=newNode;
    print(head);
    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtTail(tail,9);
    print(head);

    insertAtPosition(tail,head,4,22);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteNode(3,head);
    print(head);
    return 0;
}