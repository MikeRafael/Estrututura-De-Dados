#include"listaSequencial.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct lista{
  int qtd;     
  Figurinha dados[MAX];
};

/* IMPLEMENTACOES
*****/

Lista* listaCria(){
  Lista *li;
  li = (Lista*) malloc(sizeof(struct lista));

  if(li != NULL)
    li->qtd = 0;

  return li;

}//fim[listaCria]

void listaDestroi(Lista *li){
  free(li);
}//fim[listaDestroi]

int listaTamanho(Lista *li){
  if(li == NULL)
    return -1;
  else
    return li->qtd; // (*li).qtd

}//fim[listaTamanho]

int listaCheia(Lista* li){

  if(li == NULL)
    return -1;

  return (li->qtd == MAX);

}//fim[listaCheia]

int listaVazia(Lista* li){

  if(li == NULL)
    return -1;

  return (li->qtd == 0);

}//fim[listaVazia]

int listaInsereFinal(Lista* li, Figurinha fig){
  if(li == NULL)
    return 0; // NA0

  if(listaCheia(li))
    return 0; // NAO

  li->dados[li->qtd] = fig;
  li->qtd++;
  return 1; // S1M

}//fim[listaInsereFinal]

int listaInsereInicio(Lista* li, Figurinha fig){
  int i; // Para laÃ§os

  if(li == NULL)
    return 0; // NA0

  if(listaCheia(li))
    return 0; // NAO

  for(i = li->qtd-1; i >= 0; i--)
    li->dados[i+1] = li->dados[i];

  li->dados[0] = fig; 
  li->qtd++;

  return 1; // S1M

}//fim[listaInsereFinal]

int listaInsereOrdenado(Lista* li, Figurinha fig){

  int k, i; // para laÃ§os

  if(li == NULL)
    return 0; // NA0

  if(listaCheia(li))
    return 0; // NA0

  // Fazendo uma busca:
  i = 0;
  while(i < li->qtd && li->dados[i].numeroFigurinha < fig.numeroFigurinha)
    i++;

  for(k = li->qtd-1; k >= i; k--)
    li->dados[k+1] = li->dados[k];

  li->dados[i] = fig;
  li->qtd++;
  return 1;  // SIM;

}//fim[listaInsereOrdenado]



int listaConsultaPos(Lista*li, int pos, Figurinha *fig){

  if(li == NULL || pos <= 0 || pos > li->qtd)
    return 0; // NA0

  *fig = li->dados[pos-1];
  return 1;    // S1M

}//fim[listaConsultaPos]



int listaConsultaNumFig(Lista*li, int numFig, Figurinha *fig){

  int k, i;

  if(li == NULL)
    return 0;  // NA0

  // Fazendo a busca
  i = 0;
  while(i < li->qtd && li->dados[i].numeroFigurinha != numFig)
    i++;

  // NÃ£o Encontrou?
  if(i == li->qtd)
    return 0; // NA0

  *fig = li->dados[i];
  return 1;  // S1M

}//fim[listaConsultaMat]

int listaImprime(Lista* li){

  int i;
  i = 0;
  printf("LISTANDO OS JOGADORES DA LISTA:\n");
  while(i < li->qtd){
    printf("\nNumero Figurinha: %d\n",li->dados[i].numeroFigurinha);
    printf("Nome do Jogador: %s\n",li->dados[i].nomeJogador);
    printf("Numero da Camisa: %d\n",li->dados[i].numeroCamisa);
    printf("Posicao: %s\n",li->dados[i].posicao);
    printf("Nacionalidade: %s\n",li->dados[i].nacionalidade);
    printf("\n");
    i++;
  }
  printf("---------------\n");

  return 1;
   
}//fim[listaImprime]


// Exercício 2 | Avaliação 2

//Questão 2 - letra B
void imprimeBr(Lista*li){
  int i=0;
  printf("\nIMPRIMINDO OS JOGADORES BRASILEIROS:\n");
  while(i<li->qtd){
    if(!strcmp(li->dados[i].nacionalidade,"Brasileiro")){
      printf("\nNumero Figurinha: %d\n",li->dados[i].numeroFigurinha);
      printf("Nome do Jogador: %s\n",li->dados[i].nomeJogador);
      printf("Numero da Camisa: %d\n",li->dados[i].numeroCamisa);
      printf("Posicao: %s\n",li->dados[i].posicao);
      printf("Nacionalidade: %s\n",li->dados[i].nacionalidade);
      printf("\n");
    }
    i++;
  }
  printf("---------------\n");
}//FIM DA B

//Questão 2 - letra C
void imprimeCamisa(Lista*li,int camisa){
  int i=0;
  printf("\nIMPRIMINDO OS JOGADORES CAMISA 10:\n");
  while(i<li->qtd){
    if(li->dados[i].numeroCamisa==camisa){
      printf("\nNumero Figurinha: %d\n",li->dados[i].numeroFigurinha);
      printf("Nome do Jogador: %s\n",li->dados[i].nomeJogador);
      printf("Numero da Camisa: %d\n",li->dados[i].numeroCamisa);
      printf("Posicao: %s\n",li->dados[i].posicao);
      printf("Nacionalidade: %s\n",li->dados[i].nacionalidade);
      printf("\n");
    }
    i++;
  }
  printf("---------------\n");
}//FIM DA C
//Questão 2 - letra D
int listaImprimeInverso(Lista* li){

  int i;
  i = li->qtd-1;
  printf("IMPRIMINDO LISTA DE FORMA INVERSA:\n");
  while(i>=0){
    printf("\nNumero Figurinha: %d\n",li->dados[i].numeroFigurinha);
    printf("Nome do Jogador: %s\n",li->dados[i].nomeJogador);
    printf("Numero da Camisa: %d\n",li->dados[i].numeroCamisa);
    printf("Posicao: %s\n",li->dados[i].posicao);
    printf("Nacionalidade: %s\n",li->dados[i].nacionalidade);
    printf("\n");
    i--;
  }
  printf("---------------\n");
  return 1;
}//FIM DA D
