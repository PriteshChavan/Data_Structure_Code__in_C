#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};



int Full(struct stack *s, int value){
    
      if(s->top == s->size-1){
          printf("stack overflow");
      }
      s->top++;
      s->arr[s->top] = value;
      
}
int pop(struct stack *s){
    if(s->top==-1){
        printf("Stack underflow");
    }
    else{
        int val = s->arr[s->top];
        s->top= s->top-1;
        printf("%d",val);
        return val;
    }
}

int main(){

struct stack *s;
s->size=4;
s->top=-1;
s->arr=(int *) malloc (sizeof(int));

Full(s, 3);
Full(s, 4);
Full(s, 1);
Full(s, 98);
Full(s, 9);

pop(s);


}