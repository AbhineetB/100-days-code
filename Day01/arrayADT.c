#include <stdio.h>
#include <stdlib.h>

//this is a code for a dynamic array, stored in heap using
//help of memory allocation and structures.

struct myArr{
    int total_size;
    int used_size;
    int* ptr; //pointer pointing to 1st element of the array.
};

void createArr(struct myArr *a,int tsize,int usize){
    (*a).total_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int*)malloc(tsize*sizeof(int));
}

void input(struct myArr *a){
    for(int i=1;i<=(a->used_size);i++){
        printf("%d element: ",i);
        scanf("%d",&((a->ptr)[i]));
    }
}

void show(struct myArr *a){
    for(int i=1;i<=(a->used_size);i++){
        printf("%d\n",(a->ptr)[i]);
    }
}

int main(){
    struct myArr elements;
    createArr(&elements,5,3);
    input(&elements);
    show(&elements);
}

//create insert operation: insert(element, index)
//for unsorted array: remove the already persent element
//to first empty slot
//Delete operation.