#ifndef STACK_H
#define STACK_H

#define MAX 100

typedef struct {
    int items[MAX];
    int top;
} Stack;

void initStack(Stack* s);
int isEmptyStack(Stack* s);
int isFullStack(Stack* s);
void push(Stack* s, int value);
int pop(Stack* s);
int peekStack(Stack* s);

#endif
