#include<stdio.h>
#include"�������ʼ��.h"

Status ListMidpointSeek(LinkList L)
{
	LinkList q, g;
	q = L;
	g = L;
	if (!q->next)
	{
		return ERROR;//�ձ����
	}
	if (!g->next->next)
	{
		printf("%d\n", q->next->data);
		return (q->next->data);//��һ������
	}

	while (g->next )
	{
		q = q->next;
		g = g->next->next;//����ָ��
		if (g == NULL)
			break;
	}
	printf("%d\n", q->data);
	return q->data;

}
