#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* tree;
void create_tree(struct node*);
struct node* insertElement(struct node*, int);
int totalNodes(struct node*);
int main(void)
{
    int option, val;
    struct node* ptr;
    create_tree(tree);
    printf("\n System: A new tree has been created!\n");
    do
    {
        printf("\n ********* MAIN MENU ********** \n");
        printf("\n 1. Insert Elements");
        printf("\n 8. Count the total number of nodes");
        printf("\n 14. Exit");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
        AGAIN:
            printf("\n Enter the value of the new node (no more node = -1) : ");
            scanf("%d", &val);
            if (val != -1)
            {
                tree = insertElement(tree, val);
                goto AGAIN;
            }
            break;
        case 8:
            printf("\n The total number of nodes = %d", totalNodes(tree));
            break;
        }
    } while (option != 14);
    getchar();

    return 0;
}
void create_tree(struct node* tree)
{
    tree = NULL;
}
struct node* insertElement(struct node* tree, int val)
{
    struct node* ptr, * nodeptr, * parentptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->left = NULL;
    ptr->right = NULL;
    if (tree == NULL)
    {
        tree = ptr;
        tree->left = NULL;
        tree->right = NULL;
    }
    else
    {
        parentptr = NULL;
        nodeptr = tree;
        while (nodeptr != NULL)
        {
            parentptr = nodeptr;
            if (val < nodeptr->data)
                nodeptr = nodeptr->left;
            else
                nodeptr = nodeptr->right;
        }
        if (val < parentptr->data)
            parentptr->left = ptr;
        else
            parentptr->right = ptr;
    }

    return tree;
}
int totalNodes(struct node* tree)
{
    if (tree == NULL)
        return 0;
    else
        return (totalNodes(tree->left) + totalNodes(tree->right) + 1);
}