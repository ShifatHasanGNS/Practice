#include <iostream>
#define QUEUE_MAX_SIZE 500000

using namespace std;

// Queue Data_Structure
typedef struct
{
    int head, tail, data[QUEUE_MAX_SIZE+1];
}Queue;

int enqueue(Queue *queue, int item)
{
    if((queue->tail+1) % (QUEUE_MAX_SIZE+1) == queue->head) return -1;
    queue->data[queue->tail] = item;
    queue->tail = (queue->tail+1) % (QUEUE_MAX_SIZE+1);
    return 0;
}

int dequeue(Queue *queue)
{
    if(queue->head == queue->tail) return -1;
    queue->head = (queue->head+1) % (QUEUE_MAX_SIZE+1);
    return queue->data[queue->head-1];
}

//-------------------------------------------------------------------------------//


int main()
{
    Queue queue;

    cout << dequeue(&queue) << endl;

    enqueue(&queue, 5);
    enqueue(&queue, 6);
    enqueue(&queue, 7);

    cout << dequeue(&queue) << endl;

    cout << dequeue(&queue) << endl;
    cout << dequeue(&queue) << endl;
    cout << dequeue(&queue) << endl;
    
    return 0;
}