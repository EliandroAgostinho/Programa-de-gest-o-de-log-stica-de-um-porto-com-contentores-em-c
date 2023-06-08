#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include"Pilha.c"


int main(){

   setlocale(LC_ALL,"Portuguese");
   
   int aux, i,  qtdcont;
   int a, x, n, num_pr;
   int codg[40];   
    
    
    printf("\n\n\n\n"); 
    printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");  
    printf("\t\t\t#|========================================================|#\n");
    printf("\t\t\t#| Empresa de gestão e logística do porto de contentores  |#\n");
    printf("\t\t\t#|========================================================|#\n");
    printf("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
   
    system("pause");
    system("cls");   
   
  // Inicialização das 4 pilhas ou 4 locais que se pode empilhar os contentores
  
    EPilha *p_1=(EPilha*)malloc(sizeof(EPilha));
    EPilha_inicia(p_1);
    
    EPilha *p_2=(EPilha*)malloc(sizeof(EPilha));
    Pilha_inicia(p_2);

    EPilha *p_3=(EPilha*)malloc(sizeof(EPilha));
    Pilha_inicia(p_3);
  
  
    EPilha *p_4=(EPilha*)malloc(sizeof(EPilha));
    Pilha_inicia(p_4); 
 
  

    printf("\nQuantos contentores deseja empilhar\t ");
    scanf("%i",&qtdcont);	
   
   
    if(qtdcont>12){
    printf("\n\aApenas são permitidos  12 contentores à serem armazenados no total!");	
    return 0;
    }	
   	
   

// Scan dos codigos dos contentores inseridos pelos usuários	
 for(i=0;i<qtdcont;i++){
 
 
   printf("\nInsira o código do contentor que deseja empilhar->\t");
   scanf("%i",&codg[i]);		
 
  }
 
  

// verificando se o codigo foi inserido repetidamente 
 
 for(x=0;x<qtdcont;x++){
      aux=0;
      	
        for (a=x+1;a<qtdcont;a++){
  
     if (codg[x]==codg[a]){
        aux=1;	
     	
     } 
 	
 }
 
 if(aux==1){
 	
        printf("\n\aNão é permitido repetir o código dos contentores!");
        system("pause");
        return 0;
 }
 
 }

 
  //Empilhando os contentores numa pilha de cada vez, assim o contentor será empilhado no local com a pilha mais baixa 	
	
for(n=0;n<qtdcont;n++){

  	  
  if(n==0){
  
  num_pr=codg[n];	  
  Pilha_insere(p_1, num_pr);
  
 	  	
  }
  
   if(n==1){

 num_pr=codg[n];	  
 Pilha_insere(p_2, num_pr);
	  	
  }
  
  if(n==2){
  num_pr=codg[n];	  	
  Pilha_insere(p_3, num_pr);	
	  	
	  	
  }
  
  if(n==3){
	  
    num_pr=codg[n];	  	
    Pilha_insere(p_4, num_pr);	

 }

    if(n==4){
  
  num_pr=codg[n];	
  Pilha_insere(p_1, num_pr);	  
	  	
  }


 if(n==5){

 num_pr=codg[n];
 Pilha_insere(p_2, num_pr);	
 	
  }
  
  if(n==6){
  	
  num_pr=codg[n];
  Pilha_insere(p_3, num_pr);
  	
  }
  
  if(n==7){
  	
  num_pr=codg[n];
  Pilha_insere(p_4, num_pr);	
  	
  }
  
  
  if(n==8){
  
  num_pr=codg[n];
  Pilha_insere(p_1, num_pr);	
  	
  }
  
  if(n==9){

  num_pr=codg[n];
  Pilha_insere(p_2, num_pr);
  	
  }
  
  if(n==10){
  	
num_pr=codg[n];
Pilha_insere(p_3, num_pr);
  }
  
  if(n==11){
  	
  num_pr=codg[n];
  Pilha_insere(p_4, num_pr);	
  	
  }
  
  		
}



system("pause");
system("cls");

printf("\t\t\t\t<<===========Impressão===========>>\n\n");



//Antes de imprimir verificar se a pilha está vazia dentro da fução imprimir

Pilha_imprime(p_1);
Pilha_imprime(p_2);
Pilha_imprime(p_3);
Pilha_imprime(p_4);

 	
system("pause");
return 0;	
}


