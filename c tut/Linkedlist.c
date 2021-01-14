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

}