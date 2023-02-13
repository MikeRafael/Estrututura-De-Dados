#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main (void){
 float vet[SIZE];
 int i, *pontvet;
 pontvet = vet;
 
 printf("ELEMENTOS:\n\n");
 for(i = 0; i < SIZE; i++){
  printf("[%.2f] ", (vet[i] = 10 + rand() %100) / 3.27);
 }
 printf("\n\nENDERECOS DO ARRAY:\n\n");
 
 for(i = 0; i < SIZE; i++){
     printf("%i : %.2f : %i\n",i+1, vet[i]/3.27, pontvet++);
 } 
 
 return EXIT_SUCCESS;
}
