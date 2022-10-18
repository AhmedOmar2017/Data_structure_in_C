#include "stack.h"



int IsMatchingPair(char open_char,char closed_char);
int IsBalanced(char exp[]);


int main(){
    char text[] = "b-{(x+y)*z+3}";
    if(IsBalanced(text)){
        printf("Is balanced\n");
    }
    else{
        printf("Is not balanced\n");
    }
    return 0;
}

int IsMatchingPair(char open_char,char closed_char){
    if(open_char == '(' && closed_char == ')'){
        return 1;
    }else if(open_char == '[' && closed_char ==']'){
        return 1;
    }else if(open_char == '{' && closed_char =='}'){
        return 1;
    }else{
    return 0;
    }
}

int IsBalanced(char exp[]){
    Stack stack;
    Stack *ptr_stack = &stack;

    int x = 0;
    char element = '\0';
    int length = strlen(exp);
    Init(ptr_stack);

    for(x = 0; x < length; x++){
        if(exp[x] == '('|| exp[x] == '{'|| exp[x] == '['){
            Push(exp[x],ptr_stack);
        }else{
                if(exp[x] == ')'|| exp[x] == '}'|| exp[x] == ']'){
                    if(IsEmpty(ptr_stack)){
                        return 0;
                    }else{
                        Pop(&element, ptr_stack);
                        if(!IsMatchingPair(element, exp[x])) return 0;
                    }

                }

           }

    }
    if(IsEmpty(ptr_stack)){
        return 1;
    }else{
        return 0;
    }

}
