#include<stdio.h>
#include"�������ʼ��.h"

LinkList ListRecursion(LinkList L)
{
	if (!L->next)//��������ĩβ
		return L;
	LinkList q = ListRecursion(L->next);
	L->next->next = L;
	L->next = NULL;
	return q;
}