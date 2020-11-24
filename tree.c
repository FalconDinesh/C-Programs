#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node* left;
    struct node* right;
};

struct node* create(int val){
    struct node* new=(struct node* ) malloc (sizeof(struct node));
    new->val=val;
    new->left=NULL;
    new->right=NULL;
}

struct node* insert(struct node* root,int val){
    
    if(root==NULL){
        root=create(val);
        //printf("%d\n",val);
    }
    else{
        if(root->val > val){
            root->left=insert(root->left,val);
            //printf("Left -----> %d\n",val);
        }
        else if(root->val<=val){
            root->right=insert(root->right,val);
            //printf("Right -----> %d\n",val);
        }
    }
    return root;
}

struct node* finMin(struct node* root){
    struct node* p=root;
    if(root!=NULL){
        while(p->left!=NULL){
            p=p->left;
        }
    }
    return p;
}

struct node* delete(struct node* root,int val){
    struct node* p;
    if(root==NULL){
        return NULL;
    }
    else if(root->val>val){
        root->left=delete(root->left,val);
    }
    else if(root->val<val){
        root->right=delete(root->right,val);
    }
    else if(root->left && root->right){
        p=finMin(root->right);
        root->val=p->val;
        root->right=delete(root->right,root->val);
    }
    else{
        p=root;
        if(root->left==NULL){
            root=root->right;
        }
        else if(root->right==NULL){
            root=root->left;
        }
        free(p);
    }
    return root;
}
void preorder(struct node* root){
    struct node* p=root;
    if(p!=NULL){
        printf("%d ",p->val);
        preorder(p->left);
        preorder(p->right);
    }
}

void inorder(struct node* root){
    struct node* p=root;
    if(p!=NULL){
        inorder(p->left);
        printf("%d ",p->val);
        inorder(p->right);
    }
}

void postorder(struct node* root){
    struct node* p=root;
    if(p!=NULL){
        postorder(p->left);
        postorder(p->right); 
        printf("%d ",p->val);

    }
}

int main(){
    struct node* root=NULL;
    int arr[]={8,7,0,3,21,14,9,4,25,22};
    for (int i=0;i<10;i++){
        root=insert(root,arr[i]);
    }
    delete(root,21);
    preorder(root);
}