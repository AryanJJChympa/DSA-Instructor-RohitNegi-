#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int value)
  {
    data = value;
    next = NULL;
    prev = NULL;
  }
};

Node *CreateDLL(int arr[], int index, int size, Node *back)
{
  if (index == size)
    return NULL;

  Node *temp = new Node(arr[index]);
  temp->prev = back;
  temp->next = CreateDLL(arr, index + 1, size, temp);
  return temp;
}

int main()
{
  Node *head = NULL;

  // // CREATING DOUBLY LINKED LIST
  int arr[] = {1, 2, 3, 4, 5};

  // // Creating USING RECURSION
  head = CreateDLL(arr, 0, 5, NULL);

  // //Delete at start

  // if(head!=NULL){

  //     //If only one node exist
  //     if(head->next==NULL){
  //         delete head;
  //         head=NULL;
  //     }

  //     //If more than one node exist

  //     Node*temp=head;
  //     head=head->next;
  //     delete temp;
  //     head->prev=NULL;
  // }

  // Delete at end

  // if(head!=NULL){
  //     //If only one node exist
  //     if(head->next==NULL){
  //         delete head;
  //         head=NULL;
  //     }

  //     //If more than one node exist
  //     else{
  //         Node* curr=head;
  //         //Last node tak leke jao

  //         while(curr->next)
  //         curr=curr->next;

  //         curr->prev->next=NULL;
  //         delete curr;

  //     }
  // }

  // Delete at given position
  int pos = 5;

  // delete at start
  if (pos == 1)
  {
    // If only one node exist
    if (head->next == NULL)
    {
      delete head;
      head = NULL;
    }

    // If more than one node exist
    else
    {
      Node *temp = head;
      head = head->next;
      delete temp;
      head->prev = NULL;
    }
  }
  else
  {
    Node *curr = head;
    while (--pos)
    {
      curr = curr->next;
    }
    // delete at end

    if (curr->next == NULL) 
    {
      curr->prev->next = NULL;
      delete curr;
    }
    else
    {
      curr->prev->next = curr->next;
      curr->next->prev = curr->prev;
      delete curr;
    }
  }

  Node *trav = head;
  while (trav)
  {
    cout << trav->data << " ";
    trav = trav->next;
  }
}
