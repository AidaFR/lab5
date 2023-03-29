#include "stive.h"

void functie(int n, int v[])
{ Node* stackTop=NULL;
stackTop=(Node*)malloc(sizeof(Node));
stackTop->next=NULL;
    for(int i=0;i<n;i++)
    {scanf("%c",&v[i]);
    if(v[i]=='(')
        push(&stackTop,v[i]);
    else
    if(v[i]==')') pop(&stackTop);
 if(isempty(stackTop))



}
Data top(Node *top){
	if (isEmpty(top)) return INT_MIN;
	return top->val;
}

void push(Node**top, Data v) {
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next=*top;
	*top=newNode;
}

Data pop(Node**top) {
	if (isEmpty(*top)) return INT_MIN;
	Node *temp=(*top);
	Data aux=temp->val;
	*top=(*top)->next;
	free(temp);
	return aux;
}

int isEmpty(Node*top){
	return top==NULL;
}

void deleteStack(Node**top){
	Node  *temp;
	while (!isEmpty(*top))
		temp=*top;
		*top=(*top)->next;
		free(temp);
	}

