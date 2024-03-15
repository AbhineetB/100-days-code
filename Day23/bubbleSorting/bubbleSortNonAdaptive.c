#include <stdio.h>

void printArray(int* arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubbleSort(int* arr,int size){
    int x;
    for(int i=0;i<size-1;i++){ //number of passes
        printf("Working on pass number %d\n",i+1);
        for(int j=0;j<size-1-i;j++){ //comparisions in each pass
            if(arr[j]>arr[j+1]){
                x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
    }
}

int main(){
    int arr[]={1,3,42,3,55,64,2,34,44,23,12,11,65,32,11,34,54};
    // int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(int);

    printf("before Sort: ");
    printArray(arr,size); //before sort
    bubbleSort(arr,size); //sort
    printf("after Sort:  ");
    printArray(arr,size); //after sort

    
}