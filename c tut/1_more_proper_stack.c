#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size ;
    int top;
    int * arr;
};

int Full(struct stack *s){
    if(s->top == s->size-1){
        
        return 1;
    }
    else{
        
        return 0; 
    }
}

int Empty(struct stack *s){
    if(s->top == -1){
        
        return 1;
    }
    else{
        
        return 0; 
    }
}
int push(struct stack *s, int value){
    if(Full(s)){
       printf("Stack overflow\n");
      }
    else{
        s->top++;
        s->arr[s->top]= value;
        return value;
    }
}

int pop(struct stack *s){
    if(Empty(s)){
        printf("Stack Underflow \n");
        return -1;
    }
    else{
        int value = s->arr[s->top];
        s->top--;
        return value;
    }
}

int peek(struct stack *s, int index){
    int place = s->arr[s->top-index+1];
    if(Empty(s)){
        printf("No elements to peek in stack");
        return -1;
    }
    else
    {
        return (place);
    }
    
}

int  main(){
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s->size =6;
    s->top=-1;
    s->arr = (int *) malloc (sizeof(int));

    printf("Stack is created\n");

    printf("Stack before Push opertion in Full function  %d\n", Full(s));
    printf("Stack before Push opertion in Empty function %d\n", Empty(s));

    push(s,56);
    push(s,222);
    push(s,67);
    push(s,57);
    push(s,24);
    push(s,75);
    push(s,95);
    printf("Checking After all Push elements in Stack Full function %d\n",Full(s));
    printf("Checking After all Push elements in Stack Empty function %d\n",Empty(s));
    
    printf("Pooped element in stack is %d", pop(s));

    for(int i=0; i<=s->top+1;i++){
        printf("the value at index %d is %d\n",i+1, peek(s,i));
    }
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    for(int i=0; i<=s->top+1;i++){
        printf("the value at index %d is %d\n",i+1, peek(s,i));
    }



}