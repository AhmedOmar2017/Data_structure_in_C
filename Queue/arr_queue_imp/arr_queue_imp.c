#include "queue.h"


void Test_Size(Queue *);

int main(){
    Queue queue;
    Queue *ptr_queue = &queue;

    DATA_TYPE element;
    DATA_TYPE *ptr_element = &element;

    int x = 0;

    Init(ptr_queue);
    Test_Size(ptr_queue);

    for(x = 0; x < MAX_SIZE; x++){
        Enqueue(x, ptr_queue);
    }

    Test_Size(ptr_queue);
    
    Dequeue(ptr_element, ptr_queue);
    Dequeue(ptr_element, ptr_queue);

    Test_Size(ptr_queue);

    Enqueue(11, ptr_queue);
    Enqueue(12, ptr_queue);
    Test_Size(ptr_queue);

    printf("\n============================================\n");
    printf("Front\tElement\tsize after Dequeue\n");
    printf("\n============================================\n");

     for(x = 0; x < MAX_SIZE; x++){
        printf("\n %d", ptr_queue->front);
        Dequeue(ptr_element, ptr_queue);
        printf("\t %d", *ptr_element);
        printf("\t\t%d", QueueSize(ptr_queue));
        printf("\n-----------------------------------\n");
     }
     return 0;
}


void Test_Size(Queue *ptr_queue){
    if(IsFull(ptr_queue)){
        printf("\n Queue is Full\n");
    }else if(IsEmbty(ptr_queue)){
        printf("\n Queue is Empty\n");
    }else{
        printf("\n Queue size is %d\n", QueueSize(ptr_queue));
    }
    printf("\n--------------------------------------\n");
}
