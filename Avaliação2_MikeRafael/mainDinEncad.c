#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include"ListaDinEncad.c"

void atribuiArma(Job trabalho){
  int n;
  n=1+rand()%4;
  switch(n){
    case 1:
      
    break;
    case 2:
      sprintf(trabalho.nomeProfissao,"Guerreiro");
      sprintf(trabalho.nomeArma,"Espada");
    break;
    case 3:
      sprintf(trabalho.nomeProfissao,"Barbaro");
      sprintf(trabalho.nomeArma,"Machado");
    break;
    case 4:
      sprintf(trabalho.nomeProfissao,"Mago");
      sprintf(trabalho.nomeArma,"Cajado");
    break;
  }
}

int main(){
int i;
srand(time(NULL));
// ---------------------------------
// Dados para alimentar a estrutura
// ---------------------------------
Job profissao;
// ---------------------------------
// Manipulando a estrutura:
// ---------------------------------
Lista *li = listaCria();

// Inserindo elementos
profissao.codigo=1;
sprintf(profissao.nomeProfissao,"Arqueiro");
profissao.nivel=1;
profissao.pontosAtaque = 8500;
profissao.pontosDefesa = 1500;
sprintf(profissao.nomeArma,"Arco");
sprintf(profissao.nomeOrigem,"Cacador");
listaInsereFinal(li,profissao);
//
profissao.codigo=2;
sprintf(profissao.nomeProfissao,"Guerreiro");
profissao.nivel=1;
profissao.pontosAtaque = 3000;
profissao.pontosDefesa = 7000;
sprintf(profissao.nomeArma,"Espada e Escudo");
sprintf(profissao.nomeOrigem,"Guarda");
listaInsereFinal(li,profissao);
//
profissao.codigo=3;
sprintf(profissao.nomeProfissao,"Barbaro");
profissao.nivel=2;
profissao.pontosAtaque = 7000;
profissao.pontosDefesa = 3500;
sprintf(profissao.nomeArma,"Machado");
sprintf(profissao.nomeOrigem,"Guerreiro Tribal");
listaInsereFinal(li,profissao);
//
profissao.codigo=4;
sprintf(profissao.nomeProfissao,"Mago");
profissao.nivel=5;
profissao.pontosAtaque = 20000;
profissao.pontosDefesa = 1000;
sprintf(profissao.nomeArma,"Magia");
sprintf(profissao.nomeOrigem,"Bibliotecario");
listaInsereFinal(li,profissao);

//Exercicio 3 | Avaliação 2

listaImprime(li);//Questão 3 - letra B
listaImprimePoder(li,8000);//Questão 3 - letra C
listaBuscaArma(li,"Machado");//Questão 3 - letra D
   
// Liberando a estrutura
listaDestroi(li);


}//fim[main]
