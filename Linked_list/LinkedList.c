#include "LinkedList.h"


Node *Append(Node *head, DATA_TYPE element){
    Node *new_node = NULL;                      // located in stack
    new_node = (Node *)malloc(sizeof(Node));    // created a new heap and located in heap
    if(new_node == NULL){
        return NULL;
    } 
    new_node->element = element;
    new_node->next = next;

    if(head !== NULL){
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    return new_node;
}