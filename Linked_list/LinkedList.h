#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>


#define DATA_TYPE char

typedef struct node
{
    DATA_TYPE element;
    struct node *next;
} Node;

Node *head;

Node *Append(Node *, DATA_TYPE);           // Add a new node.
int Length(Node *);                        // Calculate the numbers of elements in linked list.
int Get_element(Node *, int, DATA_TYPE *); // get element in the linked list.
Node Delete_First_Node(Node *);            // Only delete the first element.
int Delete_Node(Node *, int);              // Delete any node axcept the first element.
Node *Insert_First(Node *, DATA_TYPE);     // Only insert the frist element.
int Insert_After(Node *, int, DATA_TYPE);  // Insert any element except the first element.

#endif

