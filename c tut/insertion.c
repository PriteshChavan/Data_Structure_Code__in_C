#include<stdio.h>
#include<conio.h>

void display(int arr[], int size){
    for(int i =0 ;i<size;i++){
       printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index){
 
 if(size>=capacity){
     return -1;
 }
 else{
     for(int i = size-1; i>= index; i--){
            arr[i+1]= arr[i];
     }
  arr[index]=element;
  return 1;

 }
}


int main(){

    int arr[100] = {4,55,33,22,22, 99};
    int size =4, element =2, capacity=100, index =2;
    display(arr, size); 
    size+=1;
    indInsertion(arr, size, element, capacity, index);
    display(arr, size);
}
i