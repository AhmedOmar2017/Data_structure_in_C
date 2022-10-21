#include "queue.h"


int main(){
    Queue queue;
    Queue *ptr_queue = &queue;

    DATA_TYPE element;
    DATA_TYPE *ptr_element = &element;

    int x = 0, temp = 0;

    Init(ptr_queue);

    Enqueue('S', ptr_queue);
    Enqueue('Y', ptr_queue);
    Enqueue('S', ptr_queue);
    Enqueue('T', ptr_queue);
    Enqueue('E', ptr_queue);
    Enqueue('M', ptr_queue);

    if(IsFull(ptr_queue)){
        printf("Queue Is Full\n");
    }else if(IsEmbty(ptr_queue)){
        printf("Queue Is Embty\n");
    }else{
        printf("Size of Queue is %d\n", QueueSize(ptr_queue));
    }

    printf("---------------------\n");

    temp = ptr_queue->front;

    for(x = temp; x <= ptr_queue->rear; x++){
        Dequeue(ptr_element, ptr_queue);
        printf("element: %c\n", *ptr_element);
        printf("size: %d\n", QueueSize(ptr_queue));
        printf("-------------------\n");
    }
    return 0;

}

