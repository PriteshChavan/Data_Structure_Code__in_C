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

//using loop functions

// int Find_min(struct Node * root){

//     struct Node * current = root;
//     if(current == NULL){

//         return;

//     }
//     while(current->left!= NULL){

//         current = current->left;

//     }
//     return current->data;

// }

// int Find_max(struct Node * root){

//     struct Node * current = root;
//     if(current == NULL){

//         return;

//     }
//     while(current->right!= NULL){

//         current = current->right;

//     }
//     return current->data;

// }
//USing recursive fnctions 
int Find_min(struct Node * root){

    if(root == NULL){

        return -1;

    }
    else if(root->left == NULL){

       return root->data;

    }
    else{
     Find_min(root->left);
    }

}

int Find_max(struct Node * root){

    if(root == NULL){

        return -1;

    }
    else if(root->right == NULL){

       return root->data;

    }
    else{
     Find_max(root->right);
    }

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
    printf("%d\n", Find_min(root));
    printf("%d\n", Find_max(root));
    

}