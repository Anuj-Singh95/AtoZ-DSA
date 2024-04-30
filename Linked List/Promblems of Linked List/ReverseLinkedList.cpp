#include<bits/stdc++.h>
using namespace std;
//   Definition of linked list
  class ListNode {
 
  public:
      int val;
      ListNode* next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode* next) : val(x), next(next) {}
 };
 

ListNode* constructLL(vector<int>& arr) {
    // Write your code here
    ListNode * head= new ListNode(arr[0]);
    ListNode * mover = head;
    for(int i=1;i<arr.size();i++){
        ListNode * temp = new ListNode(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode * prev=NULL, * temp=head, * front = head->next;

        while(front!= NULL){
            temp->next = prev;
            prev=temp;
            temp=front;
            front=temp->next; 
        }
        head= temp;
        temp->next = prev;
        return head;
    }

void  printList(ListNode * list){
    if(list == NULL) return ;
    ListNode * temp = list;
    while(temp!=NULL){
        cout<<temp->val<<"  ";
        temp=temp->next;
    }
}

int main(){
    vector<int> arr={4, 2, 5, 1};
    ListNode * head = constructLL(arr);
    // printList(head);
    
    head = reverseList(head);
    printList(head);

    return 0;
}