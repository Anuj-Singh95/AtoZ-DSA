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



void  printList(ListNode * list){
    if(list == NULL) return ;
    ListNode * temp = list;
    while(temp!=NULL){
        cout<<temp->val<<"  ";
        temp=temp->next;
    }
}

ListNode* findMidNode(ListNode* head){
        ListNode * fast=head , *slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    ListNode * reverseLink(ListNode* head){
        if(head==NULL) return NULL;
        ListNode * prev=NULL, *temp = head, *front = head->next;
        while(front!=NULL){
            temp->next=prev;
            prev=temp;
            temp = front;
            front=front->next;
        }
        temp->next=prev;
        return temp;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* mid=findMidNode(head);
        // cout<<mid->val<<endl;
        ListNode* secHalfHead = reverseLink(mid);
        // printList(secHalfHead);
        ListNode* ptr1=head, *ptr2=secHalfHead;
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->val != ptr2->val){
                reverseLink(secHalfHead);
                return false;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        reverseLink(secHalfHead);
        return true;
    }

int main(){
    vector<int> arr={1,2,3,4,4,3,2,1};
    ListNode * head = constructLL(arr);
    printList(head);
    cout<<endl;
    cout<<(isPalindrome(head))<<endl;
        // printList(head);


    return 0;
}