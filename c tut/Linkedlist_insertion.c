#include<stdio.h>
#include<stdlib.h>

struct Node {

   int data;
   struct Node * next;

};

void printNode(struct Node *a){
    while( a  != NULL)
    {
        
        printf("Elements in Nodes are %d \n", a->data);
        a = a->next;
        
    }
    printf("\n");
}

struct Node * insertion_beginning(struct Node *abc, int data)
    {
     
     struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
     ptr->next = abc;
     ptr->data = data;
     return ptr;

    };

struct Node * insertionAtMiddle(struct Node *abc, int data, int index)  //here abc is head just to show that name can be replace
    {
     
     struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
     struct Node *p = abc;
     int i=0;
     while(i != (index-1)){
        p = p->next;
        i++;
     } 
     ptr->data = data;
     ptr->next = p->next;
     p->next=ptr;
     return abc;

    };

struct Node * insertionAtEnd(struct Node *head, int data){

    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
    struct Node * p = head;
    while((p->next) != NULL ){
        p = p->next;

    }
    ptr->next = NULL;
    ptr->data = data;
    p->next = ptr;
    return head;
}
struct Node * insertionAtGiven_IndexOnly(struct Node *head, int data){

    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node));
    struct Node * p = head;
    q->next = ptr;
    ptr->next = q->next;
    return head;
}


int main(){

    //allocate through heap 
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));
    fourth = (struct Node *) malloc (sizeof(struct Node));   

   //First node and Second memory address
    (* head).data = 33;
    (* head).next = second;
    
   //Second node and Third memory address
    second->data = 566;
    second->next = third;

    //Third node and fourth memory address
    third->data = 548;
    third->next = fourth;
    
    //fourth and termination memory address
    (* fourth).data = 66;
    (* fourth).next = NULL;

     printNode(head);
     
    // head = insertion_beginning(head, 54);
    /// printNode(head);
     
     //head = insertionAtMiddle(head, 96, 2);
    // printNode(head);

     head = insertionAtEnd(head, 32);
     printNode(head);

     head = insertionAtGiven_IndexOnly(head, 12);
     printNode(head);
}