/*================================
   LISTA DINAMICA ENCADEADA.H
=================================*/

/* DEFINIÇÕES
***************/

struct job{
   int codigo;
   char nomeProfissao[50];
   int nivel;
   int pontosAtaque;
   int pontosDefesa;
   char nomeArma[50];
   char nomeOrigem[50];
};


// Apelido pro tipo lista (simplificando)
// NÃ£o sÃ³ um apelido, mas um apelido pra ponteiro
typedef struct elemento* Lista;
typedef struct job Job;


/* PROTOTIPOS
***************/
Lista* listaCria();

void listaDestroi(Lista *li);

int listaTamanho(Lista *li);

int listaCheia(Lista *li);

int listaVazia(Lista *li);

int listaInsereInicio(Lista* li, Job job);

int listaInsereFinal(Lista* li, Job job);

int listaInsereOrdenada(Lista* li, Job job);

int listaRemoveInicio(Lista* li);

int listaRemoveFinal(Lista* li);

int listaRemove(Lista *li, int codigo);

int listaConsultaPos(Lista *li, int pos, Job *job);

int listaConsultaMat(Lista *li, int codigo, Job *job);

int listaImprime(Lista *li); //Q3-B

// Exercício 3 | Avaliação 2

//Questão 3 - letra B
void listaImprimePoder(Lista*li, int poder);
//Questão 3 - letra C

//Questão 3 - letra D
void listaBuscaArma(Lista*li,char arma[50]);
//Q3-D
