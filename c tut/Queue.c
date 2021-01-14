#include<stdio.h>
#include<stdlib.h>

struct Queue {
    int size;
    int f;
    int r;
    int *arr;
};

int Full(struct Queue * q){

    if(q->r == q->size){
        return 1;
    }
    else{
        return 0;
    }
}

int Empty(struct Queue * q){
 
    if(q->r == q->f){
        return 1;
    }
    else{
        return 0;
    }
}



void enqueue(struct Queue *q, int data){

    if(Full(q)){
        printf("Queue is Full\n");
    }   
    else{
        q->r++;
        q->arr[q->r] = data;
        printf("Enqueued element %d\n", q->arr[q->r]);
    }

}

int dequeue(struct  Queue *q)
{   
    int value= -1;
    if(Empty(q)){
        printf("Queue is Empty\n");
    }
    else
    {
        q->f++;
        value = q->arr[q->f];

    }
    return value;
    
}


int main(){

    struct Queue * q = (struct Queue *) malloc (sizeof(struct Queue));
    q->size = 2;
    q->f = -1 ;
    q->r = -1;
    q->arr = (int *) malloc (q->size*sizeof(int));
    enqueue(q, 7);
    enqueue(q, 44);
    enqueue(q, 44);
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
}