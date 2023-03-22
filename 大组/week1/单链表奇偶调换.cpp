#include<stdio.h>
#include"单链表初始化.h"

Status ListParityExchange(LinkList L)
{
	LinkList q, g, k;//分别指向1，2，3号位，用k帮助q，g移动
	q = L->next;
	if (!q)
		return ERROR;//空表
	g = q->next;
	if (!g)
		return ERROR;//单结点
	L->next = g;
	while (1)
	{
		if (!g->next)//项数为偶
		{
			g->next = q;
			q->next = NULL;
			break;
		}
		k = g->next;//把k的定义放在这避免k为空指针的情况
		if (!k->next)//项数为奇
		{
			q->next = k;
			g->next = q;
			break;
		}
		q->next = k->next;
		g->next = q;
		q = k;
		g = q->next;
	}
	printf("调换成功\n");
	LinkList i;
	i = L;
	while (i->next)
	{
		i = i->next;
		printf("%d-->", i->data);
	}
	printf("NULL\n");
	return OK;
}
