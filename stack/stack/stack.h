#ifndef STACK_H_
#define STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 30
#define DATA_TYPE char

typedef struct{
    DATA_TYPE elements [MAX_SIZE];
    int top;
}Stack;



/* Interface */
void Init (Stack *);                // Initialization of stack
int IsFull (Stack *);               // check is full
int IsEmpty (Stack *);              // check is empty
int Push (DATA_TYPE *, Stack *);    // to enter data in stack
int Pop (DATA_TYPE *, Stack *);     // to extract data in stack
int StackSize (Stack *);            // to claculate the size of stack
void ClearStack (Stack *);          // to clear the whole elements of stack

#endif
