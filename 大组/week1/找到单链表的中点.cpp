#include<stdio.h>
#include"单链表初始化.h"

Status ListMidpointSeek(LinkList L)
{
	LinkList q, g;
	q = L;
	g = L;
	if (!q->next)
	{
		return ERROR;//空表情况
	}
	if (!g->next->next)
	{
		printf("%d\n", q->next->data);
		return (q->next->data);//单一结点情况
	}

	while (g->next )
	{
		q = q->next;
		g = g->next->next;//快慢指针
		if (g == NULL)
			break;
	}
	printf("%d\n", q->data);
	return q->data;

}
