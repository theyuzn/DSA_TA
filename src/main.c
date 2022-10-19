#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "stack.h"


typedef struct CLASS{
    int id;
    char *name;
}CLASS;

int main(int argc, char *argv[]){
    Stack_t *task1_stack;
    Stack_t *task2_stack;
    int val1 = 100;
    int val2 = 99;
    CLASS cls1 = {1, "You Cheng Li"};
    CLASS cls2 = {2, "Yu Hsin Chuang"};

    printf("The number of argument : %d\n", argc);
    for(int i = 0; i < argc; i++){
        printf("The argument value : %s\n", argv[i]);
    }  

    int idx = 0;
    while(argc--){
        if(strcmp(argv[idx], "--name") == 0)
            printf("The following arg is names\n");
        else if(idx == 2)
            cls1.name = argv[idx];
        else if( idx == 3)
            cls2.name = argv[idx];

        idx++;
    }

    task1_stack = init_stack();
    task2_stack = init_stack();

    /********** task 1 **********/
    push(task1_stack, (void*) &val1);
    printf("The stack[1]->value = %d\n", *(int*)task1_stack->top->value);
    push(task1_stack, (void*) &val2);
    printf("The stack[2]->value = %d\n", *(int*)task1_stack->top->value);

    int pop1 = 0;
    pop(task1_stack, (void*) &pop1, sizeof(int));
    printf("The pop1 = %d\n", pop1);
    printf("The stack[0]->value = %d\n", *(int*)task1_stack->top->value);

    /********** task 2 **********/

#define CLASS_STK2  ((CLASS*)task2_stack->top->value)

    push(task2_stack, (void*) &cls1);
    printf("The ID %d, name %s\n", CLASS_STK2->id, CLASS_STK2->name);
    push(task2_stack, (void*) &cls2);
    printf("The ID %d, name %s\n", CLASS_STK2->id, CLASS_STK2->name);

    CLASS pop_cls = {0};
    pop(task2_stack, (void*) &pop_cls, sizeof(CLASS));
    printf("The ID %d, name %s\n", pop_cls.id, pop_cls.name);
    printf("The ID %d, name %s\n", CLASS_STK2->id, CLASS_STK2->name);

    return 0;
}