#include "stack.h"



void Init (Stack * ptr_stack){
    ptr_stack->top = -1;
}


int IsFull (Stack *ptr_stack){
    if (ptr_stack->top == MAX_SIZE -1) return 1;
    else return 0;
}



int IsEmpty (Stack *ptr_stack){
    if (ptr_stack->top == -1) return 1;
    else return 0;
}


int Push (DATA_TYPE *element, Stack *ptr_stack){
    if (ptr_stack->top == MAX_SIZE -1)  return 0;
    else{
        ptr_stack->top++;
        ptr_stack->elements[ptr_stack->top] = element;
        return 1;
    }
}


int Pop (DATA_TYPE *ptr_element, Stack *ptr_stack){
    if (ptr_stack->top == -1) return 0;
    else{
        *ptr_element = ptr_stack->elements[ptr_stack->top];
        ptr_stack->top--;
        return 1;
    }
}



int StackSize (Stack *ptr_stack){
    if (ptr_stack->top == -1) return 0;
    else    return (ptr_stack->top + 1);
}


void ClearStack (Stack *ptr_stack){
    ptr_stack->top = -1;
}
