#include<stdio.h>
#include<stdlib.h>

#define OK 1
#define ERROR 0
#define TURE 1
#define FALSE 0

typedef int Status;
typedef int ElemType;

typedef struct DuaLNode
{
	ElemType data;
	struct DuaLNode *prior;
	struct DuaLNode *next;
}DuaLNode, *DuaLinkList;

bool InitLinkList(DuaLinkList L)
{
	L->data = 0;
	L->prior = NULL;
	L->next = NULL;
	return L;
}
