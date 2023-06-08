#ifndef PILHA_H
#define PILHA_H
#define MAX 3

typedef struct{
int topo, contentor[MAX];


}pilha;


struct pilha EPilha;


void Pilha_inicia(EPilha *p);// usefull

int Pilha_vazia(EPilha *p);// usefull

int Pilha_cheia(EPilha *p);// usefull

void Pilha_insere(EPilha *p, int *x);// usefull

int Pilha_retira(EPilha *p);// usefull

void Pilha_imprime(EPilha *p);//usefull

#endif

