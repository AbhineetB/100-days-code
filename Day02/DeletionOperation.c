#include <stdio.h>

void display(int arr[],int size){
    printf("Display Array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void delete(int arr[],int size,int index){
    printf("deleted ------ \n");
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    int arr[100]={1,2,35,5,12};
    int size=5,index=2;

    display(arr,size);
    delete(arr, size,index);
    size--;
    display(arr,size);
}