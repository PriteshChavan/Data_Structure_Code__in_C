#include<stdio.h>

int Merge(int * A,int *left,int *right,int left_size, int right_size){

    int i=0,j=0,k=0;
    while(i< left_size && j< right_size){

        if(left[i]<= right[j])
        {

            A[k] = left[i];
            i++;k++;
        }
        else{

            A[k] = right[j];
            j++;k++;

        }
    }

}

int MergeSort(int * A,int first,int last){
    
   
    
    if(last<2){
        return A; 
        }
    if(first<last){
    int mid = last/2;
    int left[mid];
    int left_size = sizeof(left)/sizeof(int);
    int right[last-mid];
    int right_size = sizeof(right)/sizeof(int);
    int k=0;

    if(first<last){
        for(int i=0; i<mid; i++){

            left[i] = A[i];
            printf("left %d\n",left[i]);
        }

        for(int j=mid; j< last; j++){

            right[k] = A[j];
            printf("right %d\n",right[k]);
            k++;
        }
    }
    
   MergeSort(A, first,mid);
   MergeSort(A,mid+1,last);
   Merge(A,left,right,left_size, right_size);
    }
}

int main(){

    int A[] = {12,44,6,34,662,66,44,224};
    int size = sizeof( A)/sizeof(int);

    MergeSort(A,0,size);



}