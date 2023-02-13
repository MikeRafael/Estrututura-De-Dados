/*================================
   LISTA SEQUENCIAL.H
=================================*/

/* DEFINIÃ‡Ã•ES
***************/

#define MAX 10

struct figurinha{
  int numeroFigurinha;    
  char nomeJogador[50];   
  int numeroCamisa;
  char posicao[50];
  char nacionalidade[50];
};

//Apelido pro tipo lista (simplificando)
typedef struct lista Lista;
typedef struct figurinha Figurinha;


/* PROTÃ“TIPOS
***************/
Lista* listaCria();

void listaDestroi(Lista *li);

int listaTamanho(Lista *li);

int listaCheia(Lista* li);

int listaVazia(Lista* li);

int listaInsereFinal(Lista* li, Figurinha fig);

int listaInsereInicio(Lista* li, Figurinha fig);

int listaInsereOrdenado(Lista* li, Figurinha fig);

int listaConsultaPos(Lista*li, int pos, Figurinha *fig);

int listaConsultaNumFig(Lista*li, int numFig, Figurinha *fig);

int listaImprime(Lista* li);

// Exercício 2 | Avaliação 2

void imprimeBr(Lista* li);

void imprimeCamisa(Lista*li, int camisa);

int listaImprimeInverso(Lista* li);
