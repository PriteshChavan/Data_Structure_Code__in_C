#include <stdio.h>
#include <stdlib.h>

struct stack
{

    int size;
    int top;
    char *arr ;
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
       
    }
    else{
        sp->top++;
        sp->arr[sp->top] = exp;
    }
}

char pop(struct stack* s){

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


int match(char a, char b)
{ 
   
   if(a=='(' && b== ')'){
       return 1;
   }
   if((a=='{' && b== '}')){
       return 1;
   }
   if((a=='[' && b== ']')){
       return 1;
   }
   
   return 0;
}


int parenthesis(char * exp){
     struct stack* sp;
     sp->size = 100;
     sp->top = -1;
     sp->arr = (char *) malloc(sp->size * sizeof(char));
     char pooped_ch;
     for (int i = 0; exp[i] != '\0'; i++)
     {
         printf("%c\n", exp[i]);
         if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
         {
            //  if (Full(sp))
            //  {
            //      return -1;
            //  }

             push(sp, exp[i]);
         }
         else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
         {
             if (Empty(sp))
             {
                 return 0;
             }
             pooped_ch = pop(sp);

             if (!match(pooped_ch, exp[i]))
             {
                 return 0;
             }
            //  else
            //  {
            //      return 0;
            //  }
         }
     }
     
     
         if (Empty(sp))
         {
             return 1;
         }
         else
         {
             return 0;
         }
     }


int main(){

     char * exp = "{77-(3)+[8+(9-11)]}";
     if(parenthesis(exp)){
         printf("The parenthesis matching");
     }
     else{
         printf("Parenthesis not matching");
     }


     



}