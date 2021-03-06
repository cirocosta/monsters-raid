#include "queue.h"

Queue queueInit()
{
	Queue q = malloc(sizeof *q);
	q->ini = q->fim = NULL;

	return q;
}

void queuePut(Queue q, CBData v)
{
	Link p = malloc(sizeof *p);
	p->conteudo = v;
	p->prox = NULL;

	if (q->ini == NULL)
	{
		q->ini = q->fim = p;
		return;
	}

	q->fim->prox = p;
	q->fim = p;
}

CBData queueGet(Queue q)
{
	CBData conteudo;
	Link p = q->ini;

	if (q->ini == NULL)
	{
		fprintf(stderr,"[ERRO] Tentando retirar de uma fila vazia\n");
		exit(-1);
	}

	conteudo = p->conteudo;

	q->ini = q->ini->prox;

	free(p);

	return conteudo;
}

int queueIsEmpty(Queue q)
{
	return q->ini == NULL;
}

void queueFree(Queue q)
{
	while (q->ini != NULL)
	{
		Link p = q->ini;
		q->ini = p->prox;
		free(p);
	}
	free(q);
}
