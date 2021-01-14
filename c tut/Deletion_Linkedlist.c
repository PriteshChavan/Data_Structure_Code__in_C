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

struct Node *DeletionAtBeginning( struct Node *head){

    struct Node *ptr= head;
    head = head->next;
    free(ptr);

    return head;
}

struct Node *DeletionInBetween(struct Node *head, int index){
   
    int i = 0;
    struct Node *p =head;
    struct Node *q=head->next;
    
    while(i!= index-1){
        p=p->next;
        q=q->next;
        i++;
    }
    p->next= q->next;
    free(q); 
    return head; 

}

struct Node *DeletionInEnd( struct Node *head){

    struct Node *p= head;
    struct Node *q = head->next;
    while(q->next != NULL){
        
        p=p->next;
        q=q->next;
    }
    p->next = NULL;
    free(q);
    return head;
    
}

struct Node *DeletionInBetweenWith_Value(struct Node *head, int value){
   
    int i = 0;
    struct Node *p =head;
    struct Node *q=head->next;
    
    while(q->next!= NULL && q->data != value){
        p=p->next;
        q=q->next;
        i++;
    }
    if(q->data == value){

     
    }
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
    (*fourth).data = 66;
    (*fourth).next = NULL;
    printf("LinkedList Before Deletion \n");
    printNode(head);
    
    // printf("LinkedList After Begnning Deletion \n");
    // head =DeletionAtBeginning(head);
    // printNode(head);

    
    // printf("LinkedList After in between Deletion \n");
    // head =DeletionInBetween(head, 2);
    // printNode(head);

    // printf("LinkedList Deletion in ENd \n");
    // head =DeletionInEnd(head);
    // printNode(head);

    printf("LinkedList Deletion with given value \n");
    head =DeletionInEnd(head);
    printNode(head);
}