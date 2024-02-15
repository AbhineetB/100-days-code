#include <stdio.h>
//Searches the element which is already present
//inside the array and returns its index value
//else Element not found
void display(int arr[],int size){
    printf("Display Array: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void binarySearch(int arr[],int size,int num){
    int low=0,high=size-1;
    for(int i=0;i<size;i++){
        if(arr[low]==num || arr[high]==num){
            printf("Number found: %d\n",num);
            break;
        }else{
            int mid =(low+high)/2; //int always acts as GIF for positive float numbers
            if(num<arr[mid]){
                high=mid;
            }else if(num>arr[mid]){
                low=mid;
            }else if(num==arr[mid]){
                int k=0;
                for(int j=0;i<size;j++){
                    if(num==arr[j]){
                        k=j;
                        break;
                    }
                }
                printf("Number found: %d at index: %d\n",num,k);
                break; //use return 1 and return -1 to get answer or no answer.
            }
        }

    }
}

int main(){
    int arr[100]={1,2,9,16,20,32,48,56,77,99,100};
    int size=11,num=99;//change this value

    display(arr,size);
    binarySearch(arr,size,num);
}