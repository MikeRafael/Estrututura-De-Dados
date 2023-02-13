#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void media(int soma){
 int matriz[4][4], i, j, numAleatorios;
    srand(time(NULL));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            numAleatorios = (rand() % 99) + 1;
            matriz[i][j] = numAleatorios;
            printf("%2d | ", matriz[i][j]);
            if (i == j){
            	soma = soma + matriz[i][j];
			}
			}
        printf("\n");
        }
        
    printf("\n"); 	
	printf("O valor da media da soma da diagonal principal e %d:", soma/4);
	
}


int main() {

   int soma;
   media(soma);
	            
}
