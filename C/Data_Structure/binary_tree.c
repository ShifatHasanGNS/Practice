#include <stdio.h>
#include <stdlib.h>

// Binary_Tree Data_Structure
typedef struct node Node;
struct node
{
    int data;
    Node *parent, *left, *right;
};

Node *create_node(int item)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node == NULL) exit(1);
    new_node->data = item;
    new_node->parent = NULL;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void add_left_child(Node *parent_node, Node *child)
{
    child->parent = parent_node;
    parent_node->left = child;
}

void add_right_child(Node *parent_node, Node *child)
{
    child->parent = parent_node;
    parent_node->right = child;
}

void pre_order(Node *root)
{
    printf("%d  ", root->data);
    if(root->left != NULL) pre_order(root->left);
    if(root->right != NULL) pre_order(root->right);
}

void post_order(Node *root)
{
    if(root->left != NULL) post_order(root->left);
    if(root->right != NULL) post_order(root->right);
    printf("%d  ", root->data);
}

void in_order(Node *root)
{
    if(root->left != NULL) in_order(root->left);
    printf("%d  ", root->data);
    if(root->right != NULL) in_order(root->right);
}

Node *bst_insert(Node *root, Node *node)
{
    if (root == NULL)
    {
        root = node;
        return root;
    }
    Node *parent_node = NULL, *current_node = root;
    while (current_node != NULL)
    {
        parent_node = current_node;
        if (node->data < current_node->data) current_node = current_node->left;
        else current_node = current_node->right;
    }
    if (node->data < parent_node->data) add_left_child(parent_node, node);
    else add_right_child(parent_node, node);
    return root;
}

Node *bst_transplant(Node *root, Node *current_node, Node *new_node)
{
    if (current_node == root) root = new_node;
    else if (current_node == current_node->parent->left) add_left_child(current_node->parent, new_node);
    else add_right_child(current_node->parent, new_node);
    return root;
}

Node *bst_minimum(Node *node)
{
    Node *smallest_node = node;
    while(smallest_node->left != NULL) smallest_node = smallest_node->left;
    return smallest_node;
}

Node *bst_delete(Node *root, Node *node)
{
    Node *smallest_node;
    if (node->left == NULL) root = bst_transplant(root, node, node->right);
    else if (node->right == NULL) root = bst_transplant(root, node, node->left);
    else
    {
        smallest_node = bst_minimum(node->right);
        if (smallest_node->parent != node)
        {
            root = bst_transplant(root, smallest_node, smallest_node->right);
            add_right_child(smallest_node, node->right);
        }
        root = bst_transplant(root, node, smallest_node);
        add_left_child(smallest_node, node->left);
    }
    free(node);
    return root;
}


//-------------------------------------------------------------------------------//

Node *create_tree()  // This function just to Test
{
/* Tree:
             2
           /   \
         7      9
        / \      \
       1   6      8
          / \    / \
         5  10  3   4
*/
    // Create Node(s)
    Node *two = create_node(2); // This would be the root-node
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    Node *one = create_node(1);
    Node *six = create_node(6);
    Node *eight = create_node(8);
    Node *five = create_node(5);
    Node *ten = create_node(10);
    Node *three = create_node(3);
    Node *four = create_node(4);
    // Create Tree
    add_left_child(two, seven);
    add_right_child(two, nine);
    add_left_child(seven, one);
    add_right_child(seven, six);
    add_right_child(nine, eight);
    add_left_child(six, five);
    add_right_child(six, ten);
    add_left_child(eight, three);
    add_right_child(eight, four);
    // Return root-node;
    return two;
}


//-------------------------------------------------------------------------------//


int main()
{
    Node *root = create_tree();

    printf("Pre_Order -->\t[  ");
    pre_order(root);
    printf("]\n");

    printf("Post_Order -->\t[  ");
    post_order(root);
    printf("]\n");

    printf("In_Order -->\t[  ");
    in_order(root);
    printf("]\n");

    return 0;
}
