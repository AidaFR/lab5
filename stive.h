#ifndef STIVE_H_INCLUDED
#define STIVE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
typedef char Data;
struct Elem
{
    Data val;
    struct Elem* next;
};
typedef struct Elem Node;

#define INT_MIN 0
Data top(Node *top);
void push(Node**top, Data v);
Data pop(Node**top);
int isEmpty(Node*top);
void deleteStack(Node**top);

#endif // STIVE_H_INCLUDED
