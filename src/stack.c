/*
    author: Christian Bender
    This is the implementation of the (generic) stack.
    The implementation uses the dynamic memory management and the principle
    of data hiding.
*/

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

int is_empty(Stack_t *const stk){
    return !stk->top;
}

/* Max Purpose */
// int is_full(Stack_t *const stk){
//     return stk->top && MAX_STACK_SIZE;
// }


Stack_t *init_stack(){
    Stack_t* stk = (Stack_t*) malloc(sizeof(Stack_t));
    stk->top = NULL;
    return stk;
}


void push(Stack_t *const stk, void* src){
    /* For max purpose */
    // if(stk->top >= MAX_STACK_SIZE){
    //     printf("The stack has been full!\n");
    //     return;
    // }

    Node_t *node = (Node_t *)malloc(sizeof(Node_t));
    node->value = src;
    node->next = NULL;

    if(stk->top) {
        stk->top->next = node;  
        node->previous = stk->top;
    }
    stk->top = node;

    return;
}

void pop(Stack_t *const stk, void *des, long size){
    if(is_empty(stk)){
        printf("Stack is empty!\n");
        return;
    }

    Node_t *temp =  stk->top;
    stk->top = temp->previous;
    memcpy(des, temp->value, size);
    free(temp);
    return;
}
