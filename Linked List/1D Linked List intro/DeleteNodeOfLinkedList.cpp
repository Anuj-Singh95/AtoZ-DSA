#include<bits/stdc++.h>
using namespace std;
//   Definition of linked list
  class Node {
 
  public:
      int data;
      Node* next;
     Node() : data(0), next(nullptr) {}
     Node(int x) : data(x), next(nullptr) {}
     Node(int x, Node* next) : data(x), next(next) {}
 };
 

Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node * head= new Node(arr[0]);
    Node * mover = head;
    for(int i=1;i<arr.size();i++){
        Node * temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

Node *deleteLast(Node *list){
    // Write your code here
    if(list==NULL || list->next==NULL) return NULL;
    Node * temp = list;
    while(temp->next!=NULL){
        if(temp->next->next==NULL){
        // cout<<temp->data<<" ";
        free(temp->next);
        temp->next=NULL;
        break;
        }
        temp=temp->next;
    }
    return list;
}

void  printList(Node * list){
    if(list == NULL) return ;
    Node * temp = list;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}

int main(){
    vector<int> arr={4, 2, 5, 1};
    Node * head = constructLL(arr);
    printList(head);
    deleteLast(head);
    cout<<"After deletion"<<endl;
    printList(head);

    return 0;
}