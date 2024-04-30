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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * t1 = l1, *t2 = l2, *ret=l1, *tail=NULL;
        int carry = 0;


        while(t1!=NULL || t2!=NULL){
            if(t1==NULL){
                tail = t2;
                ret=l2;
                int r= t2->val+carry;
                if(r>9) carry = 1;
                else carry =0;
                t2->val=r%10;
                t2=t2->next;
                continue;
            }
            if(t2==NULL){
                tail = t1;
                int r= t1->val+carry;
                if(r>9) carry = 1;
                else carry =0;
                t1->val=r%10;
                t1=t1->next;
                continue;
            }
            int r= t1->val+t2->val+carry;
            if(r>9) carry = 1;
            else carry =0;
            t1->val=r%10;
            t2->val=r%10;
            tail = t1;
            t1=t1->next;
            t2=t2->next;
        }
        if(carry==1)
        {
            ListNode * last = new ListNode(1, NULL);
            tail->next = last;
        }

        return ret;
    }

int main(){
    vector<int> arr={9,9,9,9,9,9};
    vector<int> arr2={9,9,9};
    ListNode * l1 = constructLL(arr);
    ListNode * l2 =constructLL(arr2);
    // printList(head);
    
    l1 = reverseList(l1);
    l2=reverseList(l2);
    printList(l1);
    cout<<endl;
    printList(l2);
    cout<<endl;
    

    ListNode * l3 = addTwoNumbers(l1,l2);
    cout<<"sum"<<endl;
    printList(l3);

    return 0;
}