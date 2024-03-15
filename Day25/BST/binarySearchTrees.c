#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createTree(int data){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void inorderTraversal(struct Node* root){
    if(root!=NULL){
        inorderTraversal(root->left);
        printf("%d ",root->data);
        inorderTraversal(root->right);
        
    }
}

int main(){
    struct Node* p0=createTree(3);
    struct Node* p1=createTree(1);
    struct Node* p2=createTree(5);
    struct Node* p3=createTree(0);
    struct Node* p4=createTree(2);
    struct Node* p5=createTree(4);
    struct Node* p6=createTree(6);

    //linking nodes
    p0->left=p1;
    p0->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;

    inorderTraversal(p0);
    isBST(p0);

}

