#include<stdio.h>

struct Node {
    
    int data;
    struct Node *right;
    struct Node * left;

};

struct Node * GetnewNode(int x){

    struct Node *newNode = (struct Node *) malloc (sizeof(struct Node));
    newNode->data = x;
    newNode->right =NULL;
    newNode->left = NULL;

    return newNode;

}

struct Node * root;

struct Node *  Insertion(struct Node *root,int data){
    

    if(root == NULL){

        root = GetnewNode(data);
    }

    else if(data<=root->data){

        root->left = Insertion(root->left,data);

    }

    else{

        root->right = Insertion(root->right,data);

    }
    return root;
    }

void printBST(struct Node *root){


    
    if(root == NULL){
        return;
    }
    printBST(root->left);
    printBST(root->right);
    printf("%d\n",root->data);
}



int main(){

    struct Node *root =NULL;
    root = Insertion(root,15);
    root = Insertion(root,10);
    root = Insertion(root,20);
    root = Insertion(root,25);
    root = Insertion(root,8);
    root = Insertion(root,12);
    root = Insertion(root,17);
    printBST(root);

    

}