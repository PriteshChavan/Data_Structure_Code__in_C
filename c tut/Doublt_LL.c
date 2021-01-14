#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *previous;
    struct Node *next;

};

struct Node *head;

void printDoublyLL(){
    struct Node* temp = head;

    
    while(temp->next != NULL){
        printf("%d", temp->data);
        temp = temp->next;
    }
    
}

struct Node * GetnewNode(int data){

    struct Node * newNode = (struct Node *) malloc (sizeof(struct Node));
    newNode->next = NULL;
    newNode->previous = NULL;
    newNode->data =data;
    return newNode;
}

void Insertion(int data){

    struct Node * newNode =GetnewNode(data);
    if(head == NULL){
        head= newNode;
        return;
    }
    
    newNode->next = head;
    head->previous = newNode;
    head = newNode;
    
}



int main(){
    head =NULL;
    Insertion(66);
    Insertion(44);
    Insertion(332);
    Insertion(443);
    
    printDoublyLL();

}