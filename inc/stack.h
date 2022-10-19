/*
    author: Christian Bender
    This header represents the public stack-interface.
    The stack is generic and self growing.
*/

#ifndef __STACK_H__
#define __STACK_H__

// #define MAX_STACK_SIZE 100

typedef struct  Node{
    void *value;
    struct Node *previous;
    struct Node *next;
}Node_t;

typedef struct Stack{
    Node_t* top;
    // int size; --> For max size;
}Stack_t;

Stack_t *init_stack();

void push(Stack_t *const , void* );

void pop(Stack_t *const stk, void *des, long size);

// void push(int data);
// int pop();
// int size();
// int isEmpty();




#endif