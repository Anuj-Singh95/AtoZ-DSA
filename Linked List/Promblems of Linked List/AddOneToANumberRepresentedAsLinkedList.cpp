#include<bits/stdc++.h>
using namespace std;
//   Definition of linked list
//   class Node {
 
//   public:
//       int data;
//       Node* next;
//      Node() : data(0), next(nullptr) {}
//      Node(int x) : data(x), next(nullptr) {}
//      Node(int x, Node* next) : data(x), next(next) {}
//  };

  class Node {
  public:
       int data;
       Node *next;
       Node() {
           this->data = 0;
           this->next = NULL;
       }
       Node(int data) {
           this->data = data;
           this->next = NULL;
       }
       Node (int data, Node *next) {
           this->data = data;
           this->next = next;
       }
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

void  printList(Node * list){
    if(list == NULL) return ;
    Node * temp = list;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}


Node * reverseLink(Node * head){
    if(head==NULL || head->next==NULL) return head;
    Node * prev=NULL, *front = head;
    while(front!=NULL){
        Node * temp = front->next;
        front->next = prev;
        prev = front;
        front = temp;
    }
    return prev;
}
Node *addOne(Node *head)
{
    // Write Your Code Here.
    head = reverseLink(head);
    Node * temp = head, *prev = NULL;
    int carry = 0;
    while(temp!=NULL){
        if(temp->data==9){
            temp->data=0;
        }else{
            temp->data++;
            head = reverseLink(head);
            return head;
        }
        prev = temp;
        temp=temp->next;
    }
    Node * last= new Node (1, NULL);
    prev->next = last;
    head = reverseLink(head);
    return head;
}
int main(){
    vector<int> arr={9, 9, 9, 9};
    Node * head = constructLL(arr);
    printList(head);
    cout<<endl;
    // head = reverseLink(head);
    // printList(head);
    head = addOne(head);
    printList(head);
    

    return 0;
}