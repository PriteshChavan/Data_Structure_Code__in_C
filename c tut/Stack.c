#include<stdio.h>
#include<stdlib.h>


struct stack {
    int size;
    int top;
    int *arr;
};

int Emptylist(struct stack *ptr){
    if(ptr->top == -1){
        printf("Stack is Empty");

    }
    else{
        printf("Stack have space");
    }

}

int Fulllist(struct stack *ptr){
    if(ptr->top == ptr->(size-1)){
        printf("Stack is full");
    }
    else{
        printf("Stack have space");
    }
}

int main(){
    
    struct stack *s;
    s->size = 6;
    s->top = -1;
    int arr = (int *) malloc ((s->size)*sizeof(int)); 
    s->arr[0] = 4;
    s->top++;
    Emptylist(s);
    Fulllist(s);
}