#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

void createStack(struct stack *a,int s){
    a->size=s;
    a->top=-1;
    a->arr=(int *)malloc(s*sizeof(int));
}

void pushStack(struct stack *a,int insertedElement){
    if(a->top==a->size-1){
        printf("\nstackOverflow\n");
    }else{
        a->top++;
        a->arr[(a->top)]=insertedElement;
    }

}

void displayStack(struct stack *a){
    for(int i=0;i<(a->top)+1;i++){
        printf("%d\n",a->arr[i]);
    }
}

void popStack(struct stack *a){
    if(a->top==-1){
        printf("\nstackUnderflow\n");
    }else{
        a->top--;
    }

}

void isEmpty(struct stack *a){
    if(a->top==-1){
        printf("\nStack is empty");
    }else{
        printf("\nStack is not empty");
    }

}

void isFull(struct stack *a){
    if(a->top==a->size){
        printf("\nStack is full");
    }else{
        printf("\nStack is not full");
    }

}

int peepStack(struct stack *a,int peepElement){
    for(int i=(a->top);i>=0;i--){
        if(a->arr[i]==peepElement){
            printf("\nelement %d found at %d",a->arr[i],i);
            return 1;
        }
    }
    return 0;
}

void stackBottom(struct stack *a){
    int i=a->top;
    while(i!=0){
        i--;
    }
    printf("\nBottom-most element of stack is %d",a->arr[i]);
}

void stackTop(struct stack *a){
    printf("\nTop-most element of stack is %d",a->arr[a->top]);
}


int main(){
    struct stack elements;
    createStack(&elements,10);//size of stack

    // pushStack(&elements,2);
    // pushStack(&elements,111);
    // pushStack(&elements,102);
    // pushStack(&elements,102);
    // popStack(&elements);
    // popStack(&elements);
    // pushStack(&elements,102);
    // pushStack(&elements,111);
    // popStack(&elements);
    // popStack(&elements);
    // popStack(&elements);
    // displayStack(&elements);
    // isEmpty(&elements);
    // isFull(&elements);
    pushStack(&elements,10);
    pushStack(&elements,31);
    pushStack(&elements,11);
    pushStack(&elements,51);
    pushStack(&elements,16);
    pushStack(&elements,51);
    pushStack(&elements,51);
    pushStack(&elements,51);
    pushStack(&elements,51);
    pushStack(&elements,51);
    pushStack(&elements,51);

    displayStack(&elements);

    if(peepStack(&elements,16)==0){
        printf("\nelement not found");
    }

    stackBottom(&elements);
    stackTop(&elements);
    

}