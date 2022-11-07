/*
    author: Christian Bender
    This header represents the public stack-interface.
    The stack is generic and self growing.
*/

#ifndef __STACK_H__
#define __STACK_H__

// #define MAX_STACK_SIZE 100

typedef struct  STK_Node{
    void *value;
    struct STK_Node *previous;
}STK_Node;

typedef struct Stack{
    STK_Node* top;
}Stack_t;

Stack_t *init_stack();

void push(Stack_t *const , void* );

void pop(Stack_t *const stk, void *des, long size);

// void push(int data);
// int pop();
// int size();
// int isEmpty();




#endif