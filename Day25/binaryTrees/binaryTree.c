#include <stdio.h>
#include <stdlib.h>

//this code has both representation and traversal of binaryTree.

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node* n = (struct Node *)malloc(sizeof(struct Node)); //alloc node
    n->data=data; //enter data
    n->left=NULL; //left node
    n->right=NULL; //right node
    return n; 
}

void preorderTraversal(struct Node* n){
    if(n!=NULL){
        printf("%d ",n->data);
        preorderTraversal(n->left);
        preorderTraversal(n->right);
    }
}

void postorderTraversal(struct Node* n){
    if(n!=NULL){
        postorderTraversal(n->left);
        postorderTraversal(n->right);
        printf("%d ",n->data);
    }
}

void inorderTraversal(struct Node* n){
    if(n!=NULL){
        inorderTraversal(n->left);
        printf("%d ",n->data);
        inorderTraversal(n->right);
    }
}

int main(){

    /*
    struct Node* p=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p1=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p2=(struct Node*)malloc(sizeof(struct Node));

    p->left=NULL;
    p->right=NULL;

    
    p1->left=NULL;
    p1->right=NULL;

    
    p2->left=NULL;
    p2->right=NULL;

    */

    //other way to construct nodes: using functions
    struct Node* p=createNode(1);
    struct Node* p1=createNode(2);
    struct Node* p2=createNode(3);
    struct Node* p3=createNode(4);
    struct Node* p4=createNode(5);
    struct Node* p5=createNode(6);
    struct Node* p6=createNode(7);

    //linking nodes:
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;

    //preorderTraversal
    // preorderTraversal(p);//send root node inside preorder traversal

    //postorderTraversal
    // postorderTraversal(p);//send root node inside postorder traversal

    //inorderTraversal
    inorderTraversal(p);//send root node inside inorder traversal

}