#include<stdio.h>
#include"�������ʼ��.h"

Status ListInvert(LinkList L)
{
	LinkList k,q, g;//�ֱ���1��2��3��λ����k��¼q��ǰ��λ�ã�g��¼���λ��
	k = L, q = L, g = L;
	if (!k->next)//�ձ�
	{
		return ERROR;
	}
	q = k->next;
	k->next = NULL;
	if (!q->next)//�����
	{
		q->next = k;
		printf("���óɹ�\n");
		printf("%d-->", q->data);
		printf("NULL\n");
		return OK;
	}
	g = q->next;

	while (g->next)//��˫����򲻽�ѭ��
	{
		q->next = k;
		k = q;
		q = g;
		g = g->next;
	}
	q->next = k;
	g->next = q;
	L = g;//�ƶ�ͷָ��
	printf("���óɹ�\n");
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

