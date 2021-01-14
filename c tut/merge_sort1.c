#include<stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int *A,int l,int mid,int h){

    int i=l,j=mid+1,k=l;
    int B[100];

    while(i<=mid && j<=h){

        if(A[i]<A[j]){

            B[k] = A[i];
            k++;
            i++;

        }

        else{

            B[k] = A[j];
            j++; k++;

        }
    }

    while(i<=mid){

        B[k] = A[i];
        i++;k++;

    }
        while(j<=h){

        B[k] = A[j];
        j++;k++;
        }

    for (int i = l; i <= h; i++)
    {
        A[i] = B[i];
    }
          
}

void mergesort(int A[], int l, int h){

    if(l<h){

        int mid = (l+h)/2;
       
        mergesort(A, l,mid);
         
    
        mergesort(A,mid+1,h);
        merge(A,l,mid,h);

    }

}

int main(){

    int A[]={7,1,22,8};
    
    int size = sizeof(A)/sizeof(int);
    printArray(A, size);
    mergesort(A, 0,size-1);
    printArray(A, size);
     
}
