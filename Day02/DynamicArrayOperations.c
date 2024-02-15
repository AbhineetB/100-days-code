#include <stdio.h>
#include <stdlib.h>

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
    printf("Input:\n ");
    for(int i=0;i<(a->used_size);i++){
        printf("enter %d element: ",i);
        scanf("%d",&((a->ptr)[i]));
    }
}

void show(struct myArray *a){
    printf("\nShow: ");
    for(int i=0;i<(a->used_size);i++){
        printf("%d ",(a->ptr)[i]);
    }
}

int traverse(struct myArray *a){
    printf("\nTraverse: ");
    for(int i=0;i<(a->used_size);i++){
        printf("%d ",(a->ptr)[i]);
    }
}

int insertionSORT(struct myArray *a,int num,int index){
    printf("\nInsertion with sort: DONE");
    for(int i=(a->used_size);i>=index;i--){
        a->ptr[i+1]=a->ptr[i];
    }
    a->ptr[index]=num;
}

int main(){
    struct myArray elements;
    create(&elements,10,5);
    input(&elements);
    show(&elements);
    traverse(&elements);
    insertionSORT(&elements,99,3);
    elements.used_size++;
    traverse(&elements);
}