#include <stdio.h>

int main(){
    int arr[]={1,3,42,3,55,64,2,34,44,23,12,11,65,32,11,34,54};
    int size=sizeof(arr)/sizeof(int);

    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
            if(i==size+1){
                printf("%d ",arr[j]);
            }
        }
    }
}