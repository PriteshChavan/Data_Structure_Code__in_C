#include<stdio.h>

struct myArray{

int total_size;
int used_size;
int *ptr;

};

void createArray(struct myArray * marks,int tsize, int usize ){

marks->total_size = tsize;
marks->used_size = usize;
marks->ptr =(int *) malloc (tsize*(sizeof(int)));


}

void setValue(struct myArray * a){

    int n, i;
    for( i =0; i< a->used_size; i++)
    {
        printf("Enter Elements %d", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void showValue(struct myArray * a){
    int i;
    for(int i =0; i<a->used_size; i++)
        printf(" %d", (a->ptr)[i]);
}

int main(){
struct myArray marks;
createArray(marks,10,2);
setValue(&marks); 
showValue(&marks);
}