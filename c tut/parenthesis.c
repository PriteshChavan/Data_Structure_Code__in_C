#include<stdio.h>
#include<stdlib.h>

struct stack{

    int size;
    int top;
    char * arr ;
};

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

void push(struct stack *sp, char exp){

    if(Full(sp)){
       printf("Stack Overflow %d", exp);
       return ; 
    }
    else{
        sp->top++;
        sp->arr[sp->top] = exp;
    }
}

char pop(struct stack * s){

    if(Empty(s)){
        printf("Stack Underflow");  
        return -1; 
          
            }
    else{

        char value = s->arr[s->top];
        s->top--;
        return value;

    }


}

int parenthesis(char * exp){
     struct stack * sp;
     sp->size = 100;
     sp->top =-1;
     sp->arr = (char *) malloc(sp->size*sizeof(char));
     for(int i = 0 ; exp[i] != '\0'; i++)
    {
        printf("%c\n",exp[i]);
         if(exp[i]=='(')
        {
            if(Full(sp)){
                return -1;
            }

            push(sp, '(');

        }
         else if(exp[i] == ')')
        {
             if(Empty(sp)){
                 return 0;
        }
        pop(sp);
     
        }
    }
    if(Empty(sp)){
        return 1;
    }
        else
        {
            return 0;
        }
        
    }

int main(){

     char * exp = "((8)(*-(-$$9))";
     if(parenthesis(exp)){
         printf("The parenthesis matching");
     }
     else{
         printf("Parenthesis not matching");
     }


     



}