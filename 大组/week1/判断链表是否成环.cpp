#include<stdio.h>
#include"�������ʼ��.h"

Status ListLoopJudge(LinkList L)
{
	LinkList q, g;
	q = L, g = L;
	if (!g->next|| !g->next->next)
	{
		return FALSE;//�ձ��ֻ��һ��������
	}
	do
	{
		q = q->next;
		g = g->next->next;//����ָ��
		if (!g || !g->next)
			break;
	} while (q == g );

	if (q == g)
	{
		return TURE;//������ɻ�
	}
	else
	{
		return FALSE;
	}
}