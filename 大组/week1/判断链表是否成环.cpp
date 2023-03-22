#include<stdio.h>
#include"单链表初始化.h"

Status ListLoopJudge(LinkList L)
{
	LinkList q, g;
	q = L, g = L;
	if (!g->next|| !g->next->next)
	{
		return FALSE;//空表或只有一个结点情况
	}
	do
	{
		q = q->next;
		g = g->next->next;//快慢指针
		if (!g || !g->next)
			break;
	} while (q == g );

	if (q == g)
	{
		return TURE;//相遇则成环
	}
	else
	{
		return FALSE;
	}
}