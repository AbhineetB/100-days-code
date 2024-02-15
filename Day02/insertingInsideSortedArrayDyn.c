#include <stdio.h>
#include <stdlib.h>

//stored in heap memory

struct myArray{
    int total_size;
    int used_size;
    int* ptr;
};

void create(struct myArray *a,int tsize,int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}

void input(struct myArray *a){
    for(int i=0;i<(a->used_size);i++){
        printf("element %d: ",i);
        scanf("%d",&(a->ptr[i]));
    }
}

void show(struct myArray *a){
    for(int i=0;i<(a->used_size);i++){
        printf("%d ",((a->ptr)[i]));
    }
    printf("\n");
}

void sortedArrayInsert(struct myArray *a,int num){
    int k=0;
    for(int i=0;i<(a->used_size);i++){
        if(a->ptr[i]>num){
            k=i;
            break;
        }
    }
    for(int i=(a->used_size)+1;i>=k;i--){
        a->ptr[i+1]=a->ptr[i];
    }
    a->ptr[k]=num;
} 

int main(){
    int num=14;
    struct myArray elements;
    create(&elements,10,6);
    input(&elements);
    show(&elements);
    sortedArrayInsert(&elements,num);
    elements.used_size++;
    show(&elements);
}