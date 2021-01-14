#include<stdio.h>


void printArray(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}


void Insertion_sort(int *A ,int count){
    int key;
    int j=0;
    int temp;
    for(int i=1;i<=count-1;i++){

        key = A[i];
        j=i-1;
        while(A[j] > key && j>=0){
            printf("%d\n", A[j]);
             temp =A[j];
             A[j] = A[j+1];
             A[j+1] = temp;
            //   A[j+1] = A[j];
             j--;

        }
        A[j+1] = key;


    }
}


int main(){

    int A[] = {12,7,53,86,9,15};
    int count = 6;
    printArray(A, count);
    Insertion_sort(A, count);
    printArray(A, count);
    return 0;

}