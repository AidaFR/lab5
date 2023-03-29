#include "stive.h"


int main()
{ char c='a';
Node* stackTop=NULL;
stackTop=(Node*)malloc(sizeof(Node));
stackTop->val='c';
push(&stackTop,c);
printf("%c%c",stackTop->val,stackTop->next->val);
int n, v[100];
scanf("%d",&n);
citire(n,v);
    return 0;
}
