#include<stdio.h>
#include"单链表初始化.h"

LinkList ListRecursion(LinkList L)
{
	if (!L->next)//锁定链表末尾
		return L;
	LinkList q = ListRecursion(L->next);
	L->next->next = L;
	L->next = NULL;
	return q;
}