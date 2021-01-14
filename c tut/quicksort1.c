#include<stdio.h>


void print(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int *A, int start, int end){

    int pivot =A[start];
    int i=start,j=end,temp;
    do{
     while(A[i]<=pivot){
     i++;
     }

    
    
    while(A[j]>pivot){
    j--;}

    if(i<j){
        temp =A[i];
        A[j] = A[i];
        A[i] = A[j];
    }
    } while(i<j);

    temp =A[start];
    A[start] = A[j];
    A[j] = temp;
    
    
    return j;
}

void Quicksort(int *A, int start, int end){

    int pIndex;
    if(start<end){
        pIndex = partition(A,start,end);
        Quicksort(A,start,pIndex-1);
        Quicksort(A, pIndex+1, end);
    }
}

int main(){

int A[] = {7,2,1,6};
 int size = sizeof(A)/sizeof(int);
print(A,size);
Quicksort(A,0,size-1);
print(A,size);
    
}