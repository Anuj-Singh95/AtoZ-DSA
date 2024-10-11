#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int rear ;
    int front;
    int * arr;
    int size;
}queue;

int isFull(queue * q){
    if(q->front==0 && q->rear==q->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(queue * q){
    if(q->front==-1 && q->rear==-1){
        return 1;
    }
    return 0;
}

int dequeue(queue * q){
    if(isEmpty(q)){
        printf("Queue underflow , no elements to delete from queue\n");
        return -1;
    }else if(q->front==q->rear){
        int temp = q->arr[q->front];
        q->front=-1;
        q->rear=-1;
        return temp;
    }else{
        int temp = q->arr[q->front];
        q->front++;
        return temp;
    }
}

void enqueue(queue * q, int val){
    if(isFull(q)){
        printf("Queue over flow\n");
    }
    else if(q->front==-1 && q->rear==-1){
        q->front=0;
        q->rear=0;
        q->arr[q->rear]=val;
    }else if(!isFull(q) && q->rear < q->size-1){
        q->rear++;
        q->arr[q->rear]=val;
    }
    else{
        printf("shift and insert\n");
        for(int i=0;i<(q->rear-q->front+1);i++){
            q->arr[i]=q->arr[i+q->front];
        }
        q->rear= q->rear-q->front;
        q->front=0;

        q->rear++;
        q->arr[q->rear]=val;
    }
}

int main(){
    queue q;
    q.front=-1;
    q.rear=-1;
    q.size=5;
    q.arr = (int * )malloc(q.size * sizeof(int));
    
    while (1)
    {
        int c,val;
        printf("Enter 1 for enqueue \n");
        printf("Enter 2 for dequeue \n ");
        printf("Enter 3 to exit\n");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf("Enter any value to insert in queue: ");
            scanf("%d", &val);
            enqueue(&q, val);
            break;
        case 2:
            printf("deleted element: %d\n",dequeue(&q));
            break;
        case 3: 
            return 0;
            break;
        default:
            printf("Enter a valid input\n");
            break;
        }
        
    }
    

    return 0;
}