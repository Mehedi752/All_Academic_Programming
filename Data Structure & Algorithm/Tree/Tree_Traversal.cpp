#include <bits/stdc++.h>
using namepace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data)
{
    struct node *n;                                 // Creating a node pointer.
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memory in heap.

    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct node *p = create_node(4);
    struct node *p1 = create_node(1);
    struct node *p2 = create_node(6);
    struct node *p3 = create_node(5);
    struct node *p4 = create_node(2);
    struct node *p5 = create_node(7);
    struct node *p6 = create_node(8);

    // Linking the root node with left and right children.

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;

    //          4
    //
    //    1           6
    //
    // 5     2     7      8

    printf("Preorder Tree Traversal : ");
    preorder(p);
    printf("\n");

    printf("Postorder Tree Traversal : ");
    postorder(p);
    printf("\n");

    printf("Inorder Tree Traversal : ");
    inorder(p);
    return 0;
}
