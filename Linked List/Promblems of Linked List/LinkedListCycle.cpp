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

bool hasCycle(ListNode * head) {
        map< ListNode , int> mp;
        ListNode * temp = head;
        while(temp->next!=NULL){
            cout<<temp->val<<" ";
            if(mp.find(*temp)!=mp.end()){
                return true;
            }else{
                mp[*temp]++;
            }
            temp=temp->next;
        }
        return false;
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
    
    cout<<(hasCycle(head))<<endl;

    return 0;
}