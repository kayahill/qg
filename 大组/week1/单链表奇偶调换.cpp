#include<stdio.h>
#include"�������ʼ��.h"

Status ListParityExchange(LinkList L)
{
	LinkList q, g, k;//�ֱ�ָ��1��2��3��λ����k����q��g�ƶ�
	q = L->next;
	if (!q)
		return ERROR;//�ձ�
	g = q->next;
	if (!g)
		return ERROR;//�����
	L->next = g;
	while (1)
	{
		if (!g->next)//����Ϊż
		{
			g->next = q;
			q->next = NULL;
			break;
		}
		k = g->next;//��k�Ķ�����������kΪ��ָ������
		if (!k->next)//����Ϊ��
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
	printf("�����ɹ�\n");
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
