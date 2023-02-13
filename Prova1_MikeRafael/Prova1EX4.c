#include <stdio.h>
#include <stdlib.h>

int main() {
   int num, i;
   float *notas, soma;
   
   printf("Informe a quantidade de alunos: ");
   scanf("%d", &num);
   
   notas = (float *) malloc(sizeof(float) * num);
   for(i=0; i<num; i++){
       printf("Informe a nota do aluno [%d]: ", i);
       scanf("%f", &notas[i]);
   }
   
   soma = 0;
   for(i=0; i<num; i++){
       soma = soma + notas[i];

   }

   free(notas);
   printf("A media desses alunos e %.2f!\n", soma / num);

   return 0;

}
