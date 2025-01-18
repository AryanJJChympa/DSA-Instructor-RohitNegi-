#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node*left,*right;
    Node(int value){
        data=value;
        left =right= NULL;
    }
};

int main(){
    int x;
    cout<<"Enter root: "<<endl;
    cin>>x;
    queue<Node*>q;
    Node* root=new Node(x);
    q.push(root);

    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        cout<<"Enter the Left Value of: "<<temp->data<<endl;
        cin>>x;//left child
        if(x!=-1){
            temp->left=new Node(x);
            q.push(temp->left);
            cout<<"Pushed: "<<x<<"to the left"<<endl;
        }
        cout<<"Enter the Right Value of: "<<temp->data<<endl;
        cin>>x;//right child
        if(x!=-1){
            temp->right=new Node(x);
            q.push(temp->right);
            cout<<"Pushed: "<<x<<"to the right"<<endl;
        }
    }
    return 0;
}