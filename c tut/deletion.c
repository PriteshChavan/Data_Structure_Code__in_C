#include<stdio.h>
#include<conio.h>

void display(int arr[], int size){
    for(int i =0 ;i<size;i++){
       printf("%d ", arr[i]);
    }
    printf("\n");
}

int indDeletion(int arr[], int size, int index){
 
 if(index>=size){
     return -1;
 }
 else{
     for(int i = index; i< size-1; i++){
            arr[i]= arr[i+1];
     }

 }
}


int main(){

    int arr[100] = {4,55,33,22,22, 99};
    int size =4, index =2;
    display(arr, size); 
    indDeletion(arr, size, index);
    size-=1;
    display(arr, size);
}
