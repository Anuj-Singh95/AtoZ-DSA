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
Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    if(head==NULL) return head;
    
        Node * temp = head;
        while(temp!=NULL){
            if(head->data==k){
            Node * t = head;
            head=head->next;
            t->next=NULL;
            delete t;
            temp = head;
            continue;
        }
        if(temp->data==k){
            Node * prev = temp->prev;
            prev->next = temp->next;
            if(temp->next!=NULL)
            temp->next->prev = prev;
            temp->next = NULL;
            temp->prev=NULL;
            Node * t= temp;
            delete t;
            temp= prev;

        }
        temp=temp->next;
        
    }
    return head;
    
}


int main(){
    vector<int> arr={2,6,1,9};
    Node * head = constructDLL(arr);

    printDoublyLinkedList(head);
    cout<<endl;
    deleteAllOccurrences(head, 6);
    cout<<endl;
    printDoublyLinkedList(head);

    return 0;
}