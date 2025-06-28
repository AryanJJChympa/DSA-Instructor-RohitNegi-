#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

Node*insertNode(Node*root, int insertVal){
    if(root==NULL){
        return new Node(insertVal);
    }

    if(insertVal<root->data){
        root->left=insertNode(root->left,insertVal);
    }
    else{
        root->right=insertNode(root->right,insertVal);
    }
    return root;
}

void inorder(Node*root){
    if(root==NULL){
        return;
    }
    
    //LEFT
    inorder(root->left);
    //NODE
    cout<<root->data<<" ";
    //RIGHT
    inorder(root->right);
}

void preorder(Node*root){
    if(root==NULL) return ;
    //ROOT
    cout<<root->data<<" ";
    //LEFT
    preorder(root->left);
    //RIGHT
    preorder(root->right);
}

// void postorder(Node*root){
//     if(root==NULL) return;
//     //LEFT
//     postorder(root->left);
//     //RIGHT
//     postorder(root->right);
//     //ROOT
//     cout<<root->data<<" ";
// }


void postorder(Node*root){
    if(root==NULL)return;
    
    //LEFT Node
    postorder(root->left);
    //Right Node
    postorder(root->right);
    //Data
    cout<<root->data<<" ";
}
bool searchNode(Node*root, int target){
    if(root==NULL) return false;
    
    //root->data==target
    Node*temp=root;
    if(root->data==target){
        return true;
    }else if(root->data<target && root->right){
        searchNode(root->right,target);
    }else{
        searchNode(root->left,target);
    }
    return false;
}

int main(){
    int arr[]={10,20,8,9,5,4,7,15,1,11};
    Node*root=NULL;

    for(int i=0; i<10;i++){
        root=insertNode(root, arr[i]);
    }
    inorder(root);
    cout<<endl;

    preorder(root);
    cout<<endl;

    postorder(root);
    cout<<endl;
    
    int target=99;
    // cout<<endl<<searchNode(root,target);
    if(searchNode(root,target)==true){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}