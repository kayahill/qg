#include<stdio.h>
#include"单链表初始化.h"

Status ListInvert(LinkList L)
{
	LinkList k,q, g;//分别在1，2，3号位，用k记录q的前驱位置，g记录后继位置
	k = L, q = L, g = L;
	if (!k->next)//空表
	{
		return ERROR;
	}
	q = k->next;
	k->next = NULL;
	if (!q->next)//单结点
	{
		q->next = k;
		printf("倒置成功\n");
		printf("%d-->", q->data);
		printf("NULL\n");
		return OK;
	}
	g = q->next;

	while (g->next)//若双结点则不进循环
	{
		q->next = k;
		k = q;
		q = g;
		g = g->next;
	}
	q->next = k;
	g->next = q;
	L = g;//移动头指针
	printf("倒置成功\n");
	LinkList i;
	i = L;
	while (1)
	{
		if (!i->next)
			break;
		printf("%d-->", i->data);
		i = i->next;

	}
	printf("NULL\n");
	return OK;
}

