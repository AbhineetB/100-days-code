#include <stdio.h>

void mergeProcessor(int A[],int B[], int C[],int m,int n){
    int i,j,k;
    i=j=k=0;
    while(i<m &&j<n){
        if(A[i]<B[j]){
            C[k]=A[i];
            i++;
            k++;
        }else{
            C[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<m){
        C[k]=A[i];
        k++;
        i++;
    }
    while(j<n){
        C[k]=B[j];
        k++;
        j++;
    }
}

void printArray(int C[],int m,int n){
    for(int i=0;i<m+n;i++){
        printf("%d ",C[i]);
    }
}

int main(){
    // Two sorted arrays

    int arr1[]={1,3,4,8,11,15,19,23};
    int size1=sizeof(arr1)/sizeof(int);

    int arr2[]={2,4,9,14,17,21,25};
    int size2=sizeof(arr2)/sizeof(int);

    int size3=size1+size2;
    int arr3[size3];
    printArray(arr3,size1,size2);
    mergeProcessor(arr1,arr2,arr3,size1,size2);
    printArray(arr3,size1,size2);

}