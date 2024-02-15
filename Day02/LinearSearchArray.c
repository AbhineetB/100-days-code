#include <stdio.h>
//only Searches the element which is already present
//inside the array and returns its index value
void display(int arr[],int size){
    printf("Display Array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i; //element at index i
            break;
        }
    }
    return -1;//element not found
}

int main(){
    int arr[]={1,2,9,16,20,32,48,56,77,99,100};
    
    int element=48;
    int size=sizeof(arr)/sizeof(int); //use this to find no of elements inside array
    display(arr,size);
    int lsearchElement=linearSearch(arr,size,element);
    if(lsearchElement==-1){
        printf("Element not found");
    }else{
        printf("element %d was found at: %d",element,lsearchElement);
    }
}