#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
  int size;
  int top;
  char * arr;

};

int operator(char * infix){

    if(infix == '+' || infix == '-'|| infix == '/'|| infix == '*'){

        return 1;

    }
    else{
        return 0;
    }

}
char stacktop(struct stack * s){
    return s->arr[s->top];
}

int precedence(char  *infix){

    if(infix == '*'|| infix == '/'){
        return 3;
    }
    else if(infix =='+' || infix == '-'){
        return 2;
    }
    else{
        return 0;
    }

}

int Full(struct stack *sp){

    if(sp->top == sp->size-1){
        return 1;

    }
    else{
        return 0;
    }
}

int Empty(struct stack *sp){

    if(sp->top == -1){
        return 1;

    }
    else{
        return 0;
    }
} 

void push(struct stack * ptr, char *infix){
      
      if(Full(ptr)){

          printf("Stack Overflow cannot push %c", infix);
      }
      else{
          ptr->top++;
          ptr->arr[ptr->top] = infix;
          
      }

}

char pop(struct stack *ptr){

    if(Empty(ptr)){
        printf("Stack Underflow");
        return -1;
    }

    else{
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

char * InfixtoPostfix(char *infix){

    struct stack * p = (struct stack *) malloc(sizeof(struct stack));
    p->size = 100;
    p->top = -1;
    p->arr = (char *) malloc (p->size*sizeof(char ));
    int i=0,j=0;

    char * postfix = (char *) malloc ((strlen(infix)+1) * sizeof(char));
    printf("%c\n", stacktop(p));

    while(infix[i]!='\0'){

        if (!operator(infix[i]))
        {

            postfix[j] = infix[i];
            j++;
            i++;
        }
        else{
            
            if(precedence(infix[i])>precedence(stacktop(p))){
                
                push(p, infix[i]);
                i++;

            }
            else{

                postfix[j] =  pop(p);
                j++;
            }

        }

    }
    while(!Empty(p)){
        postfix[j] = pop(p);
        j++;

    }
    postfix[j] = '\0';
    return postfix;
}


int main(){

    char * infix = "x-y*z/g";
    printf("Postfix is %s", InfixtoPostfix(infix));
    return 0;

}