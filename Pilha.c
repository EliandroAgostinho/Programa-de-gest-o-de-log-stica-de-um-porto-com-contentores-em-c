#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include"Pilha.h"

typedef struct{
int topo, contentor[MAX];


}pilha;


void Pilha_inicia(EPilha *p){
   
  p->topo=-1;
  printf("\nPilha inicializada!\n");
   	
}




int Pilha_vazia(EPilha *p){// //função para verificar  ~
  
  if(p->topo==-1){
  
    return 1;
    	
}
  
  else{
  	
   return 0;
  }	
	
	
}



int Pilha_cheia(EPilha *p){ //função para verificar  ^
	
if(p->topo==MAX-1){
	
 return 1;	
}

else{
	
return 0;
}

 
}



void Pilha_insere(EPilha *p, int x){
	
   if( Pilha_cheia(p)==1){
   	
     printf("\n\aErro: Pilha cheia!");	
   	
   }	
   
   else{
   	
     p->topo++;
     p->contentor[p->topo]=x;
     printf("\nInserido com sucesso!");
   	
   }
	
	
}




int Pilha_retira(EPilha *p){
	
   int aux,k;
   
   k=Pilha_vazia(p);
   
   if(k==1){
   	
      printf("\n\aErro: Pilha vazia!\n");
      system("pause");
   	
   	
   } 
   
   else{
   	
      aux=p->contentor[p->topo];
      p->topo--;
      return aux;
      free(aux);   	
   }
	
}




void Pilha_imprime(EPilha *p){
int i, aux, k;

k=Pilha_vazia(p);


if(k==1){

printf("\n\aErro: Pilha vazia!");

	
}

for(i=0;i<p->topo;i++){
	
   aux=p->contentor[p->topo];
   p->topo=p->topo-1;
   	
   printf("|%i\t|\n",&p->contentor[i]);
   printf("|_\t|\n");
   		
}

}






