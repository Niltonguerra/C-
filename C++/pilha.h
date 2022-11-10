#include<string.h>
#include<stdio.h>
#define MAX 50
#include<stdlib.h>


struct Pilha
{
 int item[MAX];
 int topo;
};
//protótipo das funções
void IniPilha(struct Pilha *ps);
 int pilhavazia(struct Pilha *ps);
 int pilhacheia(struct Pilha *ps);
 int Push(struct Pilha *ps, int x);
 int Pop(struct Pilha *ps);
 int Top(struct Pilha *ps);//inicializa a pilha

void IniPilha(struct Pilha *ps)
 {
 ps->topo= -1;
} 

//pilhavazia 
int pilhavazia(struct Pilha *ps)
{
if (ps->topo == -1)
    return(1);
else
   return(0);
}
//pilhacheia 
int pilhacheia(struct Pilha *ps)
{
if (ps->topo == MAX - 1)
 return(1);
else
 return(0);
}


//Empilha 
int Push(struct Pilha *ps, int x) 
{
if (pilhacheia(ps)==1)
     {
    printf("cheia");
     return(0);
     }
     else
     return(ps->item[++(ps->topo)]=x);
}


//desempilha
int Pop(struct Pilha *ps)
{
 if (pilhavazia(ps)==1)
 {
 printf("underflow!!\n");
 return(0);
 }
 else
 return(ps->item[ps->topo--]);
} 

//Topo
int Top(struct Pilha *ps) 
{
if (pilhavazia(ps)==1)
 {
 printf( "Underflow!!!\n");
 return(0);
 }
else
 return(ps->item[ps->topo]);
} 






