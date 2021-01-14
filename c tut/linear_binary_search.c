#include<stdio.h>

int LinearSearch(int arr[], int size, int element){
    int count=0;
    int arr1[100];
    for(int i=0;i<size;i++){

        if(arr[i]==element){
            arr[i] == i;
            return i;
        }
    }

return -1;
}

// int swap(int *a[], int *b[]){
//     int temp =*a;
//     *a = *b;
//     *b= temp;

// }

// void BubbleSort(int arr[], int size){
//     bool swapped;
//     for(int i=0; i<size; i++){
//         for(int j= 0; j<size-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(&arr[j],&arr[j+1]);
//                 swapped = true;

//             }
            
//         }
    
    
//     }
//     if (swapped == false)
//          break;
    
//     return arr;
    
// }

int BinarySearch(int arr[], int size, int element){
    
   // BubbleSort(arr, size);
    int low=0,high=size-1;

    while(low<=high){
        int mid = (low+high)/2;   
        if(arr[mid] == element){
            return mid;
        }

        if(arr[mid]>element){
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
        
    }

return -1;
}





int main(){

    //Unsorted Array
    //int arr[]={4,4222,443,22,11,44};
    //Sorted Array
    int arr[]={1,3,66,334,445,522,644,778};
    int size = sizeof(arr)/sizeof(int);
    //BubbleSort(arr, size);
    int element = 778;
    //int SearchIndex = LinearSearch(arr, size, element);
    int SearchIndex = BinarySearch(arr, size, element);
    printf("THe element found is %d", SearchIndex);

}