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

ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        int count =1;
        ListNode * temp = head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int k=count-n;
        if(k==1){
            temp = head;
            head=head->next;
            free(temp);
        }else{
            temp= head;
            while(k>2){
                k--;
                temp=temp->next;
            }
            ListNode * t = temp->next;
            temp->next = temp->next->next;
            free(t);
        }
        return head;

    }

int main(){
    vector<int> arr={1};
    ListNode * head = constructLL(arr);
    printList(head);
    cout<<endl;
    head=removeNthFromEnd(head,2);
        printList(head);


    return 0;
}