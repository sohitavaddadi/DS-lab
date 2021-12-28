#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root = NULL;
struct node* cur;
struct node* temp;
struct node* create(){
    cur = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&(cur->data));
    cur->left = NULL;
    cur->right = NULL;
    if(root == NULL){
        root = cur;
    }
    else{
        temp = root;
        while(temp!=NULL){
            if(temp->data>cur->data && temp->left == NULL){
                temp->left = cur;
                return root;
            }
            else if(temp->data>cur->data && temp->left != NULL){
                temp = temp->left;
            }
            else if(temp->data<cur->data && temp->right == NULL){
                temp->right = cur;
                return root;
            }
            else{
                temp = temp->right;
            }
           
        }
    }
}
void preorder(struct node* root){
    if(root!=NULL){
        printf("%d\n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);
    }
}
void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d\n",root->data);
    }
}
int main(){
    int ch;
    while(1){
        printf("Give your choice\n");
        printf("1-create\n2-preorder\n3-inorder\n4-postorder\n5-exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                root = create();
                break;
            case 2:
                preorder(root);
                break;
            case 3:
                inorder(root);
                break;
            case 4:
                postorder(root);
                break;
            case 5:
                exit(0);
        }
    }
}
/*Output
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
1
13
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
1
3
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
1
4
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
1
12
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
1
14
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
1
89
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
1
34
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
1
22
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
1
45
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
2
13
3
4
12
14
89
34
22
45
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
3
3
4
12
13
14
22
34
45
89
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
4
12
4
3
22
45
34
89
14
13
Give your choice
1-create
2-preorder
3-inorder
4-postorder
5-exit
5
*
