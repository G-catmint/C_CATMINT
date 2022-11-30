#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
struct TreeNode {
    char data;
    struct TreeNode* left;
    struct TreeNode* right;
};
struct TreeNode* create_by_pre(struct TreeNode* T) 
{
    char ch;
    scanf("%c", &ch);
    getchar();
    if (ch == '#') 
    {
        T = NULL;
    }
    else 
    {
        T = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        T->data = ch;
        T->left = create_by_pre(T->left);
        T->right = create_by_pre(T->right);
    }
    return T;
}
void postOrder(struct TreeNode* T) {
    if (T != NULL) {
        postOrder(T->left);
        postOrder(T->right);
        printf("\t%c", T->data);
    }
}
int main() {
    struct TreeNode* T;
    T = NULL;
    T = create_by_pre(T);
    printf("\n´ÎÐò±éÀú:");
    postOrder(T);
    return 0;
}
