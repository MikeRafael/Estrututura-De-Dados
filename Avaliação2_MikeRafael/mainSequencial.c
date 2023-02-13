#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"listaSequencial.c"
#include <math.h>
#include <time.h>


const char* atribuePosicao(){
  int n;
  char *pos;
  n= 1+rand()%7;
  switch(n){
    case 1:
      pos="Goleiro";
    break;
    case 2:
      pos="Lateral Direito";
    break;
    case 3:
      pos="Lateral Esquerdo";
    break;
    case 4:
      pos="Zagueiro";
    break;
    case 5:
      pos="Volante";
    break;
    case 6:
      pos="Meia";
    break;
    case 7:
      pos="Atacante";
    break;
  }
  return pos;
}
const char* atribueNacionalidade(){
  int n;
  char *nacionalidade="";
  n= 1+rand()%7;
  switch(n){
    case 1:
      nacionalidade="Brasileiro";
    break;
    case 2:
      nacionalidade="Alemao";
    break;
    case 3:
      nacionalidade="Italiano";
    break;
    case 4:
      nacionalidade="Frances";
    break;
    case 5:
      nacionalidade="Argentino";
    break;
    case 6:
      nacionalidade="Africano";
    break;
    case 7:
      nacionalidade="Norte Americano";
    break;
  }
  return nacionalidade;
}

int main(){
  int i;
  srand(time(NULL));
  // ---------------------------------
  // Dados para alimentar a estrutura
  // ---------------------------------
  Figurinha jogadores[50];
  // ---------------------------------
  // Manipulando a estrutura:
  // ---------------------------------
  Lista *li = listaCria();
  // Inserindo elementos
  for(i=0;i<8;i++){
    jogadores[i].numeroFigurinha= i+1;
    sprintf(jogadores[i].nomeJogador, "Jogador %d", i+1);
    jogadores[i].numeroCamisa=1+rand()%100;
    strcpy(jogadores[i].posicao,atribuePosicao());
    strcpy(jogadores[i].nacionalidade,atribueNacionalidade());
    listaInsereFinal(li, jogadores[i]);
  }
  //Garantindo que tenha pelo menos 1 brasileiro
  jogadores[9].numeroFigurinha= i+1;
  sprintf(jogadores[9].nomeJogador, "Jogador %d", i+1);
  jogadores[i].numeroCamisa=1+rand()%100;
  strcpy(jogadores[9].posicao,atribuePosicao());
  strcpy(jogadores[9].nacionalidade,"Brasileiro");
  listaInsereFinal(li, jogadores[9]);
  //Garantindo pelo menos um numero 10
  jogadores[10].numeroFigurinha= 10;
  sprintf(jogadores[10].nomeJogador, "Jogador %d", 10);
  jogadores[10].numeroCamisa=10;
  strcpy(jogadores[10].posicao,atribuePosicao());
  strcpy(jogadores[10].nacionalidade,atribueNacionalidade());
  listaInsereFinal(li, jogadores[10]);

  printf("\n\n\n\n\n");
  listaImprime(li);

 
  // Exercício 2 | Avaliação 2

  //Questão 2 - letra B
  printf("\n\n\n\n\n");
  imprimeBr(li);
  //FIM B
  //Questão 2 - letra C
  printf("\n\n\n\n\n");
  imprimeCamisa(li, 10);
  //FIM C
  ////Questão 2 - letra D
  printf("\n\n\n\n\n");
  listaImprimeInverso(li);
  //FIM D
  listaDestroi(li);
}//fim[main]
