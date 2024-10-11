#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int rear ;
    int front;
    int * arr;
    int size;
}queue;

int isFull(queue * q){
    if((q->front==0 && q->rear==q->size-1) || q->front-q->rear==1){
        return 1;
    }
    return 0;
    //or
    //return (q->rear+1)%q->size == q->front;
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
    }
    else if(q->front==q->rear){
        int temp = q->front;
        q->front=-1;
        q->rear=-1;
        return q->arr[temp];
    }
    else{
        int temp =q->front;
        q->front=(++q->front)%q->size;
        return q->arr[temp];
    }
}

void enqueue(queue * q, int val){
    if(isFull(q)){
        printf("Queue over flow\n");
    }
    else{
        if(q->front==-1) q->front++;
        q->rear = (++q->rear)%q->size;
        q->arr[q->rear] = val;
    }
}
int peak(queue * q){
    if(q->front==-1)
    return -1;
    return q->arr[q->front];
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
        printf("Enter 3 to peak\n");
        printf("Enter 4 to exit\n");
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
            printf("front element is : %d\n",peak(&q));
            break;
        case 4:
            return 0;
        default:
            printf("Enter a valid input\n");
            break;
        }
        printf("front = %d && rear = %d\n",q.front,q.rear);
        for(int i=0;i<5;i++){
            printf("%d  ",q.arr[i]);
        }
        printf("\n");
        
    }
    

    return 0;
}