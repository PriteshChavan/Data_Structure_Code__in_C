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

int main(){
    enqueue(54);
    enqueue(33);
    enqueue(4);
    linkedtransversal(f);
    dequeue();
    linkedtransversal(f);

}