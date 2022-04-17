#include <stdio.h>
#include <malloc.h>

class node
{
public:
    int data;
    struct node *left;
    struct node *right;

    node *createNode(int data)
    {
        node *n;         // creating a node pointer
        n = new node();  // Allocating memory in the heapa
        n->data = data;  // Setting the data
        n->left = NULL;  // Setting the left and right children to NULL
        n->right = NULL; // Setting the left and right children to NULL
        return n;        // Finally returning the created node
    }
    void inOrder(node *root)
    {
        if (root != NULL)
        {
            inOrder(root->left);
            printf("%d ", root->data);
            inOrder(root->right);
        }
    }
    node *inOrderPredecessor(node *root)
    {
        root = root->left;
        while (root->right != NULL)
        {
            root = root->right;
        }
        return root;
    }
    void insert(node *root, int key)
    {
        node *prev = NULL;
        while (root != NULL)
        {
            prev = root;
            if (key == root->data)
            {
                printf("Cannot insert %d, already in BST", key);
                return;
            }
            else if (key < root->data)
            {
                root = root->left;
            }
            else
            {
                root = root->right;
            }
        }
        struct node *no = createNode(key);
        if (key < prev->data)
        {
            prev->left = no;
        }
        else
        {
            prev->right = no;
        }
    }
    node *deleteNode(node *root, int value)
    {
        node *iPre;
        if (root == NULL)
        {
            return NULL;
        }
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        if (value < root->data)
        {
            root->left = deleteNode(root->left, value);
        }
        else if (value > root->data)
        {
            root->right = deleteNode(root->right, value);
        }
        else
        {
            iPre = inOrderPredecessor(root);
            root->data = iPre->data;
            root->left = deleteNode(root->left, iPre->data);
        }
        return root;
    }
};
int main()
{
    node n;

    // Constructing the root node - Using Function (Recommended)
    node *p = n.createNode(5);
    node *p1 = n.createNode(3);
    node *p2 = n.createNode(6);
    node *p3 = n.createNode(1);
    node *p4 = n.createNode(4);
    // struct node *p5 = createNode(7);
    // struct node *p6 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \  
    //  1   4

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    // p2->right = p5;
    // p2->left = p6;

    n.inOrder(p);
    n.deleteNode(p, 5);
    printf("\n");
    n.inOrder(p);
    printf("\n");
    n.insert(p, 16);
    printf("%d", p->right->right->data);
    printf("\n");
    n.inOrder(p);
    return 0;
}
