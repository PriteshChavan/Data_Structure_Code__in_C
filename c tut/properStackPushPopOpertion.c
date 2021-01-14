#include <stdio.h>
#include <stdlib.h>


struct stack {

    int size;
    int top;
    int *arr;
};

int Full(struct stack *s){
    if(s->top == s->size-1){
        return 1;
    }
    else 
    {
        return 0;
    }
}
int push(struct stack *s, int value){
    if(Full(s)){
        printf("Stack is Overflow SOrry\n");
        printf("CAnnot push %d in stack \n",value );
    }
    else{
        s->top++;
        s->arr[s->top]=value;
    }
}

int Empty(struct stack *s){

    if(s->top==-1){
        return 1;
    }
    else{
     return 0;
    }
}

int pop(struct stack *s, int value){
    if(Empty(s)){
       printf("stack underflow sorry\n");
       return 1;
    }
    else{
        int value = s->arr[s->top];
        s->top--;
        printf("pooped value is %d\n",value);
        return s;
    }
}

int main()
{
   struct stack *s ;
   s->size = 5;
   s->top =-1;
   s->arr = (int *)  malloc (s->size*(sizeof(int)));
   Full(s);
   Empty(s);
   printf("Before Push opertion FULL%d\n ", Full(s));
   printf("Before Push opertion Empty %d\n", Empty(s));
   push(s,55);
   push(s,58);
   push(s,66);
   push(s,92);push(s,86);
   push(s,56);
   printf("After Push operation Full %d \n", Full(s));
   printf("After Push operation Empty  %d\n", Empty(s));

   pop(s,86);
   printf("After Pop operation Full %d \n", Full(s));
   printf("After Pop operation Empty  %d\n", Empty(s));
      
}
