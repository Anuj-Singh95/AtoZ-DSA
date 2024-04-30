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

ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
        int len = 0;
        ListNode * temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        int mid = (len/2)+1;
        int cnt = 1;
        temp =head;
        while (cnt != mid)
        {
            cnt++;
            temp= temp->next;
        }
        return temp;
        
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
    printList(head);
    
    cout<<(middleNode(head))->val<<endl;

    return 0;
}