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
struct Node * GetnewNode(int data){
    struct Node * newNode= (struct Node *)malloc (sizeof(struct Node));
    newNode->data =data;
    newNode->next = NULL;
    return newNode;
}
struct Node* head;

void InsertioninLL(int data){
    struct Node * newNode = GetnewNode(data);
    // if(head == NULL){
    //     head= newNode;
    //     return;
    // }
    newNode->next = head;
    head = newNode;
}

int main(){

    //allocate through heap
    InsertioninLL(33);
    InsertioninLL(66);
    InsertioninLL(99);
    InsertioninLL(22);

    printNode(head);

}