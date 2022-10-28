#include "LinkedList.h"

/* function (Append) for add nodes in linked list*/
Node *Append(Node *head, DATA_TYPE element){
    Node *new_node = NULL;                      // located in stack
    new_node = (Node *)malloc(sizeof(Node));    // created a new heap and located in heap
    /*Check if the space is reserve*/
    if(new_node == NULL){
        return NULL;
    } 
    /*save the the element and set the next equal null*/
    new_node->element = element;
    new_node->next = NULL;
    /*Link the new node with the list*/
    if(head != NULL){   // check if the linked list is embty
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    // return the address of the new node
    return new_node;
}/*end of function (append)*/


/*function for measure the length of linked list*/
int Length(Node *head){
    int len = 1;
    if(head == NULL){   // check linked list is embty
        return 0;
    }   

    // set the address of head to temp
    Node *temp = head;
    while (temp->next != NULL){
        len++;
        temp = temp->next;  // move temp to next node
    }
    return len;
}/*end the function of Length*/



/*Function to get element in linked list*/
int Get_Element(Node *head, int node_num, DATA_TYPE *element){
    if(head == NULL){   // check linked list is embty
        return 0;
    }
    if((node_num > Length(head)) || (node_num < 1)){
        return -1;
    }

    Node * temp = head;
    int x = 1;

    while (x < node_num){
        temp = temp->next;  // move temp to the next node 
        x++;
    }
    *element = temp->element;
    return 1;
}/*end function of (get element)*/


/*function for Delete the first element*/
Node *Delete_First_Node(Node * head){
    if(head == NULL){       // check linked list is embty
        return NULL;
    }

    //check the length of the linked list
    if(Length(head) == 1){
        free(head);
        return NULL;     
    }else{
        Node *temp;
        temp = head->next;
        free(head);
        return temp; 
    }

}/*end the function (Delete the first element)*/

/*function of (Delete node)*/
int Delete_Node(Node *head, int node_num){
    if(head == NULL){   // check linked list is embty
        return 0;
    }

    // Invalid node number
    if(node_num > Length(head) || (node_num < 2)){
        return -1;
    }
    // delete any mode in the middle or last 
    Node *prev = head, *current;
    int x =1;
    while(x < node_num - 1){
        prev = prev-> next;
        x++;
    }
    current = prev->next;
    prev->next = current->next;
    free(current);

    return 1;
}/*end function of (Delete node)*/


/*function of insert first node*/
Node * Insert_First (Node *head, DATA_TYPE element){
    if(head == NULL)  return 0;      // check linked list is embty
    Node *first_node;
    // create a node
    // reserve a block in heap 
    first_node = (Node *) malloc(sizeof(Node));
    if (first_node == NULL) return head;

    // set data into a new node 
    first_node->element = element;
    first_node->next = head;

    head = first_node;
    return head;
}

int Insert_After(Node *head, int node_num, DATA_TYPE element){
    if(head == NULL)    return 0;    // check linked list is embty

    if(node_num > Length(head) || (node_num < 1))   return -1;
    Node *temp = head, *after;
    int x;
    for(x = 1; x < node_num;x++){
        temp = temp->next;
    }
    after = (Node *) malloc(sizeof(Node));
    if(after == NULL){
        return  0;
    }
    after->element = element;
    after->next = temp->next;
    temp->next = after;

    return 1;

}