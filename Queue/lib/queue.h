/*Queue data structure 
spasificlly circular queue
*/

#ifndef QUEUE_H_
#define QUEUE_H_
#include <stdio.h>
#include <stdlib.h>

#define DATA_TYPE int
#define MAX_SIZE 30
typedef struct{
    DATA_TYPE elements[MAX_SIZE];
    int front;
    int rear;
}Queue;


void Init(Queue *);
int IsFull(Queue *);
int IsEmbty(Queue *);
int Enqueue(DATA_TYPE, Queue *);
int Dequeue(DATA_TYPE *, Queue *);
int QueueSize(Queue *);
void ClearQueue(Queue *);

#endif