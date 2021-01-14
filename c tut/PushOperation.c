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

int main(){

struct stack *s;
s->size=4;
s->top=-1;
s->arr=(int *) malloc (sizeof(int));

Full(s, 9);
Full(s, 9);
Full(s, 9);
Full(s, 9);
Full(s, 9);


}