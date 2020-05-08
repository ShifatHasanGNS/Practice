#include <stdio.h>
#include <stdlib.h>

// Doubly_Linked_List Data_Structure
typedef struct node Node;
struct node
{
    int data;
    Node *previous, *next;
};

// Create A Node...
Node *create_node(int item, Node *previous, Node *next)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node == NULL) exit(1);
    new_node->data = item;
    new_node->previous = previous;
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
    node->previous->next = node->next;
    free(node);
    return head;
}

// Insert A Node At The Beginning...
Node *prepend(Node *head, int item)
{
    Node *new_node = create_node(item, NULL, head);
    return new_node;
}

// Insert A Node...
void *insert(Node *node, int item)
{
    Node *new_node = create_node(item, node, node->next);
    node->next = new_node;
}

// Insert A Node At The End...
Node *append(Node *head, int item)
{
    if(head == NULL) return create_node(item, NULL, NULL); 
    Node *current_node = head;
    while(current_node->next != NULL)
        current_node = current_node->next;
    Node *new_node = create_node(item, current_node, NULL);
    current_node->next = new_node;
    return head;
}

// Find A Node
Node *find_node(Node *head, int item)
{
    Node *temp = head;
    while(temp != NULL)
    {
        if(temp->data == item) return temp;
        temp = temp->next;
    }
    return NULL;
}

// Print Linked_List...
void print_linked_list(Node *head)
{
    Node *current_node = head;
    printf("[%d", current_node->data);
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
    Node *linked_list = create_node(0, NULL, NULL);

    append(linked_list, 1);
    append(linked_list, 2);
    append(linked_list, 3);
    append(linked_list, 4);
    append(linked_list, 5);

    print_linked_list(linked_list);
    return 0;
}