#include<stdio.h>
#include<stdlib.h>

struct Node  {
  int data;
  struct Node *next ;
};

struct Node * head;

struct Node *GetnewNode(int data){
    struct Node *newNode = (struct Node *) malloc (sizeof(struct Node));
    newNode->data =data;
    newNode->next =  NULL;
    return newNode;
}
int Full(struct Node * s){
    struct Node * n = (struct Node *) malloc (sizeof(struct Node));

    if(n == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int data){
    
    struct Node* newNode = GetnewNode(data);
    if(Full(newNode)){
       printf("Stack Overflow\n");   
        return;
    }
    else{
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        newNode->data =data;
        head = newNode;
        }
}



void print(struct Node * a){
    
    while(a!=NULL){
        printf("Elements %d\n",a->data);
        a = a->next;
    }
}

int Empty(struct Node *  s){
    if(head == NULL){
        return 1;
    }
    else
    {
        return 0;
    }
    
}



int pop(struct Node * s){

    if(Empty(s)){
        printf("Stack Underflow\n");
    }
    else
    {
        struct Node *s = head;
        head = s->next;
        int x = s->data;
        free(s);
        return x;
        
    }
    
}

void stackTop(struct Node * s){

    printf("Stack Top is %d\n",s->data );
}

int peek(int position){

    struct Node * ptr = head;
    for(int i = 0; i<(position-1) && ptr!=NULL; i++){
        ptr = ptr->next;
    }
    if(ptr!= NULL){
        return ptr->data;
    }
    else{
        return -1;
    }

}

void stackBottom(struct Node * s){

    while(s->next!= NULL) {
        s->next;
    }
    printf("Stack bottom is %d\n",s->data );
}  
int main(){

    
   
   push(68);
   push(98);
   push(679);
   push(53);
   push(55);
   push(67);

   print(head);

   int element = pop(head);
   pop(head);
   pop(head);
   printf("Popped is %d\n", element);
   print(head);
   stackTop(head);
   int position = 5;
   int post = peek(position);
   printf("Postion printf %d\n", post );
   stackBottom(head);

}
