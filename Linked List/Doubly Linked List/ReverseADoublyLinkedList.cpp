#include<bits/stdc++.h>
using namespace std;

  //Definition for doubly-linked list.
  class Node
  {
  public:
     int data;
     Node *next, *prev;
     Node() : data(0), next(nullptr), prev(nullptr) {}
     Node(int x) : data(x), next(nullptr), prev(nullptr) {}
     Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
  };
 

Node* constructDLL(vector<int>& arr) {
    // Write your code here
    if(arr.size()==0){
        return NULL;
    }
    Node * head = new Node(arr[0]);
    Node * prev = head;
    for(int i=1;i<arr.size();i++){
        Node * temp = new Node(arr[i], NULL, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;

}

void printDoublyLinkedList(Node * head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* reverseDLL(Node* head)
{   
    // Write your code here   
    if(head ==NULL) return NULL;
    Node * temp = head;

    while(temp!=NULL){
        Node * ptr = temp->next;
        temp->next = temp->prev;
        temp->prev = ptr;
        head=temp;
        temp = temp->prev;
    }

    return head;

}

int main(){
    vector<int> arr={2,6,8,9};
    Node * head = constructDLL(arr);
    head = reverseDLL(head);
    printDoublyLinkedList(head);

    return 0;
}