#include<bits/stdc++.h>
using namespace std;
typedef struct  stk
{
    int top;
    int * arr;
    int capacity;
}stk;

int isFull(stk * s){
    if(s->top+1==s->capacity){
        return 1;
    }
    return 0;
}
int isEmpty(stk * s){
    if(s->top==-1) return 1;
    return 0;
}
void push(stk * s, int val){
    if(isFull(s)){
        cout<<"Stack overflow"<<endl;
    }else{
    s->top++;
    s->arr[s->top]=val;
    }
}
void pop(stk * s){
    if(isEmpty(s))
    cout<<"Stack underflow"<<endl;
    else{
        s->top--;
    }
}
int peak(stk * s){
    if(isEmpty(s)){
        cout<<"no element to display"<<endl;
        return -1;
    }else{
        return s->arr[s->top];
    }
}

int main(){
    stk s;
    s.top=-1;
    s.capacity=100;
    s.arr = (int *)malloc(s.capacity*sizeof(int));
    cout<<isEmpty(&s)<<endl;
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    pop(&s);
    pop(&s);
    pop(&s);
    cout<<peak(&s);


    return 0;
}



