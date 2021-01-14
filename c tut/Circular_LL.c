#include<stdio.h>
#include<stdlib.h>

struct Node {

   int data;
   struct Node * next;

};

void printNode(struct Node *head){
    struct Node *ptr = head;
  //we have to give a push start so use do while or print at start and then next
    do {
        
        printf("Elements in Circular LL Nodes are %d \n", ptr->data);
        ptr = ptr->next;

    }while( ptr  != head);
    printf("\n");
}

//Add a node in begining in Circular LL
struct Node * InsertionInBeginning(struct Node *head, int data){

    struct Node *ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr->data =data;
    struct Node *p = head->next;
    while(p->next!= head){
        p=p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head=ptr;
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
    (* fourth).next = head;

    printNode(head);

    head = InsertionInBeginning(head, 85);
    printNode(head);

}