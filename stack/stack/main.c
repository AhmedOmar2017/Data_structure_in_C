#include "stack.h"



int main (){
    Stack stack;
    Stack *ptr_stack = &stack;

    DATA_TYPE element;
    DATA_TYPE *ptr_element =&element;

    int x =0, temp = 0;

    Init(ptr_stack);

    Push('S', ptr_stack);
    Push('y', ptr_stack);
    Push('s', ptr_stack);
    Push('t', ptr_stack);
    Push('e', ptr_stack);
    Push('m', ptr_stack);


    if(IsFull(ptr_stack))   printf("Stack is full\n");
    else if(IsEmpty(ptr_stack))  printf("Stack is empty\n");
    else printf("Stack size is %d \n", StackSize(ptr_stack));


    printf("----------------------\n");

    temp = ptr_stack->top;

    for(x =0;x<= temp; x++){
        Pop(ptr_element, ptr_stack);
        printf("Element: %c \n", *ptr_element);
        printf("size: %d\n", StackSize(ptr_stack));
         printf("----------------------\n");
    }
    return 0;
}
