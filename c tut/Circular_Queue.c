#include<stdio.h>
#include<stdlib.h>

struct Circular_Queue {
    int size;
    int f;
    int r;
    int *arr;
};

int Full(struct Circular_Queue * q){

    if(q->r+1%q->size == q->f){
        return 1;
    }
    else{
        return 0;
    }
}

int Empty(struct Circular_Queue * q){
 
    if(q->r == q->f){
        return 1;
    }
    else{
        return 0;
    }
}



void enqueue(struct Circular_Queue *q, int data){

    if(Full(q)){
        printf("Queue is Full\n");
    }   
    else{
        q->r = (q->r+1) % (q->size);
        q->arr[q->r] = data;
        printf("Enqueued element %d\n", q->arr[q->r]);
    }

}

int dequeue(struct  Circular_Queue *q)
{   
    int value= -1;
    if(Empty(q)){
        printf("Queue is Empty\n");
    }
    else
    {
        q->f =(q->f+1)% (q->size);
        value = q->arr[q->f];

    }
    return value;
    
}


int main(){

    struct Circular_Queue * q = (struct Circular_Queue *) malloc (sizeof(struct Circular_Queue));
    q->size = 4;
    q->f = 0 ;
    q->r = 0;
    q->arr = (int *) malloc (q->size*sizeof(int));
    enqueue(q, 7);
    enqueue(q, 45);
    enqueue(q, 44);
    enqueue(q, 48);
    enqueue(q, 48);
    if(Empty(q)){
        printf("Queue is empty\n");
    }
    if(Full(q)){
        printf("Queue is full\n");
    }

    printf("Dequeue successful %d\n", dequeue(q));
    
    if(Empty(q)){
        printf("Queue is empty\n");
    }
    if(Full(q)){
        printf("Queue is full\n");
    }
    enqueue(q, 44);
}