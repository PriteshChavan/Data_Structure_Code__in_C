#include<stdio.h>


void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void BubbleSort(int *A,int  size_of_A){
    int temp;
    for(int i=0; i< size_of_A-1 ; i++){
        
        for(int j=0;j< size_of_A- i-1;j++){
                if(A[j]>A[j+1]){

            
                    temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
            }
        }
    }
            

}

int main(){

int A[] = {4,5,33,66,77,2};
//int A[] = {1,2,3,4,5,6};
int size_of_A =6;
//int size_of_A = sizeof(A)/sizeof(int);
printf("%d\n",  size_of_A );
printArray(A,size_of_A);
BubbleSort(A,size_of_A);
printArray(A, size_of_A);
return 0;

}