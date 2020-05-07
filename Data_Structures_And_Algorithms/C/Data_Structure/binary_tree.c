#include <stdio.h>
#include <stdlib.h>

// Binary_Tree Data_Structure
typedef struct node Node;
struct node
{
    int data;
    Node *left, *right;
};

Node *create_node(int item)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node == NULL) exit(1);
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void add_left_child(Node *node, Node *child)
{
    node->left = child;
}

void add_right_child(Node *node, Node *child)
{
    node->right = child;
}

void pre_order(Node *node)
{
    printf("%d  ", node->data);
    if(node->left != NULL) pre_order(node->left);
    if(node->right != NULL) pre_order(node->right);
}

void post_order(Node *node)
{
    if(node->left != NULL) post_order(node->left);
    if(node->right != NULL) post_order(node->right);
    printf("%d  ", node->data);
}

void in_order(Node *node)
{
    if(node->left != NULL) in_order(node->left);
    printf("%d  ", node->data);
    if(node->right != NULL) in_order(node->right);
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
