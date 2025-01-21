#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left,*right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};

void PreOrder(Node*root){
    if(root==NULL)
    return;

    cout<<root->data<<" ";  //Node
    PreOrder(root->left);   //Left
    PreOrder(root->right);  //Right
}
void InOrder(Node*root){
    if(root==NULL)
    return;

    InOrder(root->left);   //Left
    cout<<root->data<<" ";  //Node
    InOrder(root->right);  //Right
}
void PostOrder(Node*root){
    if(root==NULL)
    return;

    PostOrder(root->left);   //Left
    PostOrder(root->right);  //Right
    cout<<root->data<<" ";  //Node
}

Node*BinaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node*temp=new Node(x);  
    //Left side
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left=BinaryTree();
    //Right side
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right=BinaryTree();
    return temp;
}

int main(){
    cout<<"Enter the root node: ";
    Node*root;
    root=BinaryTree();
    //Tree Creation Code ⬆️

    cout<<"Pre Oreder: ";
    PreOrder(root);

    cout<<"\nIn Oreder: ";
    InOrder(root);

    cout<<"\nPost Oreder: ";
    PostOrder(root);
}