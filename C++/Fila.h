#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAXFILA 100
struct queue {
 int item[MAXFILA];
 int inic, fim;
};
void inicFila(struct queue *pq);   /*Inicializa a estrutura da fila*/
void insFila(struct queue *pq, int x);  /*Insere o elemento x na fila*/
int remFila(struct queue *pq);  /*Remove um elemento da fila*/
int filaVazia(struct queue *pq);  /*Verifica se a fila est  vazia*/
int filaCheia(struct queue *pq);  /*Verifica se a fila est  cheia*/
int guardainicio(struct queue *pq);  /*Consulta o inicio da fila*/
void retornainicio(struct queue *pq,int x); /*Atribui o indice do primeiro elemento*/


void inicFila(struct queue *pq)  /*Inicializa a estrutura da fila*/
{
 pq->inic = MAXFILA-1;
 pq->fim  = MAXFILA-1;
};

void insFila(struct queue *pq, int x)  /*Insere o elemento x na fila*/
{
if (pq->fim == MAXFILA-1)
 pq->fim = 0;
else
  (pq->fim)++;
if (pq->fim == pq->inic)
{
 printf("Ocorreu overflow na fila!\n");
 exit(1);
}
pq->item[pq->fim] = x;
}

int remFila(struct queue *pq)  /*Remove um elemento da fila*/
{
if (filaVazia(pq)==1)
 {
  return(0);
 }
if (pq->inic == MAXFILA-1)
 pq->inic = 0;
else
  (pq->inic)++;
return(pq->item[pq->inic]);
}
int filaVazia(struct queue *pq)  /*Verifica se a fila est  vazia*/
{
if (pq->inic == pq->fim)
 return(1);
else
 return(0);
}

int filaCheia(struct queue *pq)  /*Verifica se a fila está  cheia*/
{
if (pq->fim == MAXFILA-1)
 return(pq->inic==0);
else
 return(pq->inic==((pq->fim)+1));
} 

int guardainicio(struct queue *pq)   /*consulta o inicio da fila*/
{
return (pq->inic);
}



void retornainicio(struct queue *pq, int x)  /*Atribui primeiro elemento*/
{
pq->inic = x;
}


