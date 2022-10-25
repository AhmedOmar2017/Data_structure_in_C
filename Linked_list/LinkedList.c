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


nt Length(Node *head){
    int len = 1;
    if(head == NULL){   // linked list is embty
        return 0;
    }   
    Node *temp = head;
    while (temp->next != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}


int Get_element(Node *head, int node_num, DATA_TYPE *element){
    if(head == NULL){
        return 0;
    }
    if((node_num > Length(head)) || (node_num < 1)){
        return -1;
    }

    Node * temp = head;
    int x = 1;

    while (x < node_num){
        temp = temp->next;
        x++;
    }
    *element = temp->element;
    return 1;
}



Node *Delete_First_Node(Node * head){
    Node *temp;
    if(head == NULL){
        return NULL;
    }
    if(Length(head) == NULL){
        free(head);
        return NULL;     
    }else{
        temp = head->next;
        free(head);
        return temp; 
    }

    temp = head->next;
}