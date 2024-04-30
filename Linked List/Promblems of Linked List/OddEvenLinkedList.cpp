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

ListNode* oddEvenList(ListNode* head) {
        vector<int> v;
        ListNode * temp = head;
        while(temp!=NULL && temp->next!=NULL){
            v.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp!=NULL && temp->next==NULL){
            v.push_back(temp->val);
        }

        temp=head->next;
        while(temp!=NULL && temp->next!=NULL){
            v.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp!=NULL && temp->next==NULL){
            v.push_back(temp->val);
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<"  ";
        // }
        // cout<<endl;
        temp = head;
        int i=0;
        while(temp!=NULL){
            temp->val = v[i];
            i++;
            temp=temp->next;
        }
        return head;
    }

int main(){
    vector<int> arr={1,2,3,4,5,6};
    ListNode * head = constructLL(arr);
    printList(head);
    cout<<endl;
    oddEvenList(head);
        printList(head);


    return 0;
}