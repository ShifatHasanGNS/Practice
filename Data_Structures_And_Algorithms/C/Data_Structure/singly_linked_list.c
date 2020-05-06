#include <stdio.h>
#include <stdlib.h>

// Singly_Linked_List Data_Structure
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};

// Create A Node...
Node *create_node(int item, Node *next)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node == NULL) exit(1);
    new_node->data = item;
    new_node->next = next;
    return new_node;
}

// Remove A Node...
Node *remove_node(Node *head, Node *node)
{
    if(node == head)
    {
        head = node->next;
        free(node);
        return head;
    }
    Node *current_node = head;
    while(current_node != NULL)
    {
        if(current_node->next == node) break;
        current_node = current_node->next;
    }
    if(current_node == NULL) return head;
    current_node->next = node->next;
    free(node);
    return head;
}

// Insert A Node At The Beginning...
Node *prepend(Node *head, int item)
{
    Node *new_node = create_node(item, head);
    return new_node;
}

// Insert A Node...
void *insert(Node *node, int item)
{
    Node *new_node = create_node(item, node->next);
    node->next = new_node;
}

// Insert A Node At The End...
Node *append(Node *head, int item)
{
    Node *new_node = create_node(item, NULL);
    if(head == NULL) return new_node;
    Node *current_node = head;
    while(current_node->next != NULL)
        current_node = current_node->next;
    current_node->next = new_node;
    return head;
}

// Print Linked_List...
void print_linked_list(Node *head)
{
    Node *current_node = head;
    printf("Linked List :: [%d", current_node->data);
    current_node = current_node->next;
    while(current_node != NULL)
    {
        printf(", %d", current_node->data);
        current_node = current_node->next;
    }
    printf("]\n");
}


//-------------------------------------------------------------------------------//


int main()
{
    Node *linked_list = create_node(0, NULL);

    append(linked_list, 1);
    append(linked_list, 2);
    append(linked_list, 3);
    append(linked_list, 4);
    append(linked_list, 5);

    print_linked_list(linked_list);
    return 0;
}