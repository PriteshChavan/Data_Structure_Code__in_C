#include<stdio.h>

void print(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}


int partition(int *A, int start, int n){

    
}

void QuickSort(int *A, int start, int n){

    int pIndex;
    if (start<n){
        pIndex= partition(A,start,n);
        QuickSort(A,start, pIndex-1);
        QuickSort(A,pIndex+1,n);
    }

}

int main(){

    int A[] = {5,62,2,1,3};
    int size = sizeof(A)/sizeof(int);
    print(A,size);
    QuickSort(A,0,size-1);
    print(A,size);
}