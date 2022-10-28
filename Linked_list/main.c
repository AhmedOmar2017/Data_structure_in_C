#include "LinkedList.h"


int main(){
    Node *ptr_head = NULL;
    int len , x;
    DATA_TYPE element;
    DATA_TYPE *ptr_element = &element;
// create new linked list
    ptr_head = Append(ptr_head, 'S');
    Append(ptr_head, 'Y');
    Append(ptr_head, 'S');
    Append(ptr_head, 'T');
    Append(ptr_head, 'E');
    Append(ptr_head, 'M');

    len = Length(ptr_head);
    for(x =1; x<= len; x++){
        Get_Element(ptr_head, x, ptr_element);
        printf("\n %d-->%c\n", x, *ptr_element);
    }
    printf("-----------------------------\n");

//-------------------------------------------------------------------------------------

// Delete the first element
    ptr_head= Delete_First_Node(ptr_head);
    len = Length(ptr_head);
    for(x =1; x<= len; x++){
        Get_Element(ptr_head, x, ptr_element);
        printf("\n %d-->%c\n", x, *ptr_element);
    }
    printf("-----------------------------\n");

//-------------------------------------------------------------------------------------

// Delete the  node

    Delete_Node(ptr_head, 5);
    len = Length(ptr_head);
    for(x =1; x<= len; x++){
        Get_Element(ptr_head, x, ptr_element);
        printf("\n %d-->%c\n", x, *ptr_element);
    }
    printf("-----------------------------\n");

//-------------------------------------------------------------------------------------

// insert in the  node at first

    ptr_head = Insert_First(ptr_head, 'A');
    len = Length(ptr_head);
    for(x =1; x<= len; x++){
        Get_Element(ptr_head, x, ptr_element);
        printf("\n %d-->%c\n", x, *ptr_element);
    }
    printf("-----------------------------\n");

//-------------------------------------------------------------------------------------

// insert in the  node after  element

    Insert_After(ptr_head, 2, 'M');
    len = Length(ptr_head);
    for(x =1; x<= len; x++){
        Get_Element(ptr_head, x, ptr_element);
        printf("\n %d-->%c\n", x, *ptr_element);
    }
    printf("-----------------------------\n");


    return 0;
}