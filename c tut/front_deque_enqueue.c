#include<stdio.h>
#include<stdlib.h>

struct Node *f =NULL;
struct Node *r = NULL;

struct Node {
    int data;
    struct Node *next;
};

void linkedtransversal(struct Node *f){

    //struct Node * ptr =f;
    if(f==NULL){
        printf("Queue Empty");
    }
    else{
        while(f!= NULL){
            printf("Element is %d\n", f->data);
            f=f->next;
        
    }
}
}

void enqueue(int data){

    struct Node *n = (struct Node *) malloc (sizeof(struct Node));
    
    if(n == NULL){
        printf("Queue is FULL");
    }
    else{

        n->data = data;
        n->next = NULL;
        if(f == NULL){

            f=r= n;

        }
        else{

            r->next = n;
            r = n;
        }
    }
    

}

int dequeue (){
    struct Node *ptr = f;
    //struct Node *p = (r-1);
    //printf("%d", p->data);
     int value =-1;
     if(ptr == NULL){
         printf("Queue is empty\n");

     }
     else{
        f= f->next;
        value = ptr->data;
       // p->next = NULL;
        //r = p;
        free(ptr);
        
        

     }
     return value;

}

void enqueue_front(int data){

    struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr->data = data;
    ptr->next = f;
    f=ptr;
}

void enqueue_rear(int data){
    
    struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr->data = data;
    ptr->next =NULL;
    r->next = ptr;
    r=ptr;
}

int dequeue_rear(){

    int value =-1;
    struct Node *ptr= f;
    if(f==NULL){
        printf("Queue is Empty\n");

    }
    else if(f->next == NULL){

         printf("dequeue from front %d\n", f->data);
         free(f);
         f=r=NULL;
        

    }
    else{

        while(ptr->next != r){
            ptr=ptr->next;
        }
        // for( ptr = f; ptr->next != r; ptr =  ptr->next){
        //         value = ptr->data;   
                
        // }
        printf("deletedd element from rear is %d\n", r->data);
        free(r);
        ptr->next = NULL;
        r = ptr;

    }
   // return value;

}

int main(){
    enqueue(54);
    enqueue(33);
    enqueue(4);
    linkedtransversal(f);
    dequeue();
    linkedtransversal(f);
    enqueue_front(64);
    linkedtransversal(f);
    enqueue_rear(5);
    linkedtransversal(f);
    dequeue_rear();
    linkedtransversal(f);

}